#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	if(argc>1)
	{
	char *path = (char*)malloc(1000);
	strcat(path,"\"");
	strcat(path,argv[1]);
	strcat(path,"\"");
	while(1)
	{
		system(path);
	}
	}
	return 0;
}