#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX_LINE 80
void ParseCommand(char *cmdString, char *argv[], int *waitFlag)
{
  if(argv[argv.end()-1]=='&')
  {
     waitFlag=1;
     argv[argv.end()-1] = '\0'
  }
  else waitFlag = 0;
  int index = 0;
  char delim = " ";
  char *tempStr = strtok(cmdString, delim);
  while(tempStr!= NULL)
  {
    argv[index] = tempStr;
    tempStr = strtok(NULL, delim);
    index++;
  }
  argv[index] = NULL;
}