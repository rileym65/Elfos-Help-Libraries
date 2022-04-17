#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc,char** argv) {
  char buffer[4096];
  FILE *in;
  FILE *out;
  if (argc != 3) {
    printf("Usage: crlf infile outfile\n");
    exit(1);
    }
  in = fopen(argv[1],"r");
  if (in == NULL) {
    printf("Could not open input file\n");
    exit(1);
    }
  out = fopen(argv[2],"w");
  if (out == NULL) {
    printf("Could not open output file\n");
    exit(1);
    }
  while (fgets(buffer,4095,in) != NULL) {
    while (strlen(buffer) > 0 &&
           buffer[strlen(buffer)-1] < ' ')
      buffer[strlen(buffer)-1] = 0;
    fprintf(out,"%s\r\n",buffer);
    }
  fclose(in);
  fclose(out);
  }

