#include <string.h>
#include <stdio.h>

void History_Save(char *cmdString, int& line, char *History_List[]) //luu History_List
{
   if(cmdString[0] != '!') //kiem tra co phai cmd !
   {
	if(line < MAX_HISTORY) //kiem tra da het mang chua
	{ 
	  strcpy(History_List[line], cmdString) 
	  line++;
	}
	else
	{
	  for(int i=0;i< MAX_HISTORY - 1;i++)
	  {
	   strcpy(History_List[i],History_List[i+1]);
	  }
	  strcpy(History_List[MAX_HISTORY -1], cmdString);
	}
   }
}

void History_Load(char *History_List[], int& line) //in tung dong cua History_List
{
   for(int i=0;i<line;i++)
   {
	printf("%d:    %s \n", i, History_List[i]);
}

