#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>

typedef unsigned char byte;
typedef unsigned int  dword;

char libname[1024];
int file;

typedef struct {
  byte valid;
  int  offset;
  char name[32];
  byte flags;
  int  size;
  int  datapos;
  } ENTRY;

dword findEnd() {
  dword offset;
  dword fpos;
  char done;
  byte buffer[16];
  done = 0;
  while (!done) {
    fpos = lseek(file,0,SEEK_CUR);
    if (read(file,buffer,1) != 1) {
      return fpos;
      }
    if (buffer[0] <= ' ') {
      return fpos;
      }
    while (buffer[0] != 0) {
      if (read(file,buffer,1) != 1) {
        return fpos;
        }
      }
    if (read(file,buffer,5) != 5) {
      return fpos;
      }
    offset = (buffer[1] << 24) |
             (buffer[2] << 16) |
             (buffer[3] << 8) |
              buffer[4];
    lseek(file, offset, SEEK_CUR);
    }
  return fpos;
  }

ENTRY findEntry(char* name) {
  byte buffer[16];
  int  npos;
  byte done;
  ENTRY result;
  lseek(file,0,SEEK_SET);
  result.valid = 0;
  done = 0;
  while (!done) {
    npos = 0;
    buffer[0] = 0xff;
    result.offset = lseek(file,0,SEEK_CUR);
    while (buffer[0] != 0) {
      if (read(file,buffer,1) !=1) {
        return result;
        }
      if (buffer[0] <= ' ') {
        if (npos == 0) {
          return result;
          }
        buffer[0] = 0;
        }
      else result.name[npos++] = buffer[0];
      }
    result.name[npos] = 0;
    if (read(file,buffer,5) != 5) {
      return result;
      }
    result.flags = buffer[0];
    result.size = (buffer[1] << 24) |
                  (buffer[2] << 16) |
                  (buffer[3] << 8) |
                   buffer[4];
    if (strcmp(name,result.name) == 0) {
      result.datapos = lseek(file,0,SEEK_CUR);
      result.valid = -1;
      return result;
      }
    lseek(file, result.size, SEEK_CUR);
    }
  return result;
  }

int check(char* name, char* chr, char repl) {
  char *pchar;
  char  temp[256];
  pchar = strstr(name, chr);
  if (pchar != NULL) {
    strncpy(temp,name,pchar-name);
    temp[pchar-name] = repl;
    temp[pchar-name+1] = 0;
    strcat(temp,pchar+strlen(chr));
    strcpy(name,temp);
    return -1;
    }
  return 0;
  }

void add(char* name) {
  char  buffer[256];
  char  outname[256];
  int   ct;
  int   infile;
  int   flag;
  dword size;
  strcpy(outname,name);
  flag = -1;
  while (flag) {
    flag = 0;
    if (check(outname, "_AN_", '&')) flag = -1;
    if (check(outname, "_AT_", '@')) flag = -1;
    if (check(outname, "_BS_", '\\')) flag = -1;
    if (check(outname, "_CM_", ',')) flag = -1;
    if (check(outname, "_CN_", ':')) flag = -1;
    if (check(outname, "_CB_", '}')) flag = -1;
    if (check(outname, "_CP_", ')')) flag = -1;
    if (check(outname, "_CS_", ']')) flag = -1;
    if (check(outname, "_CT_", '^')) flag = -1;
    if (check(outname, "_DL_", '$')) flag = -1;
    if (check(outname, "_DT_", '.')) flag = -1;
    if (check(outname, "_DV_", '/')) flag = -1;
    if (check(outname, "_EQ_", '=')) flag = -1;
    if (check(outname, "_EX_", '!')) flag = -1;
    if (check(outname, "_GT_", '>')) flag = -1;
    if (check(outname, "_LT_", '<')) flag = -1;
    if (check(outname, "_MN_", '-')) flag = -1;
    if (check(outname, "_MP_", '*')) flag = -1;
    if (check(outname, "_NM_", '#')) flag = -1;
    if (check(outname, "_OB_", '{')) flag = -1;
    if (check(outname, "_OP_", '(')) flag = -1;
    if (check(outname, "_OS_", '[')) flag = -1;
    if (check(outname, "_PC_", '%')) flag = -1;
    if (check(outname, "_PL_", '+')) flag = -1;
    if (check(outname, "_PP_", '|')) flag = -1;
    if (check(outname, "_QS_", '?')) flag = -1;
    if (check(outname, "_QT_", '"')) flag = -1;
    if (check(outname, "_SM_", ';')) flag = -1;
    if (check(outname, "_SQ_", '\'')) flag = -1;
    if (check(outname, "_TL_", '~')) flag = -1;
    if (check(outname, "_UN_", '_')) flag = -1;
    }
  printf("Processing: %s --> %s\n",name,outname);
  while (*name == ' ') name++;
  if ((file = open(libname, O_RDWR)) <= 0) {
    if ((file = open(libname, O_CREAT | O_RDWR,0666)) <= 0) {
      printf("Could not open library file: %s\n",libname);
      return;
      }
    }
  lseek(file,findEnd(),SEEK_SET);
  if ((infile = open(name, O_RDONLY)) <= 0) {
    printf("Could not open input file: %s\n",name);
    close(file);
    return;
    }
  size = 0;
  ct = 1;
  while (ct > 0) {
    ct = read(infile,buffer,256);
    if (ct > 0) size += ct;
    }
  lseek(infile,0,SEEK_SET);
  write(file,outname,strlen(outname)+1);
  buffer[0] = 0;
  buffer[1] = (size >> 24) & 0xff;
  buffer[2] = (size >> 16) & 0xff;
  buffer[3] = (size >> 8) & 0xff;
  buffer[4] = size & 0xff;
  write(file,buffer,5);
  ct = 1;
  while (ct > 0) {
    ct = read(infile,buffer,256);
    if (ct > 0) write(file,buffer,ct);
    }
  close(file);
  close(infile);
  }

int main(int argc, char** argv) {
  int  i;
  if (argc < 2) {
    printf("Usage: lbrdd library file list\n");
    exit(1);
    }
  strcpy(libname, argv[1]);
  i = 2;
  while (i < argc) {
    add(argv[i]);
    i++;
    }
  return 0;
  }

