#include "stdlib.h"

#define BUFSIZE 1024

char ** mytoc(char *str, char delim) 
{

  int maxBufLen;

  size_t obufSize = ((10+maxBufLen) > BUFSIZE) ? (10+maxBufLen) : BUFSIZE;

  char *obuf = (char *)malloc(obuffsize);

  char ** tokenizedString;

  //TODO: tokenize string

  free(obuf);
  return tokenizedString;

}
