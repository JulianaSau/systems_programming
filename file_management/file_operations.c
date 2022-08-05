#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp, *readfile;
	fp=fopen("filename.txt", "w+");
	fprintf(fp, "%s", "Hello World, I am very new to file management\n");
	fclose(fp);
	char ch[100];
	
	readfile=fopen("filename.txt", "r");
	while (fgets(ch,100,fp) != NULL)
	{
		printf("%s", ch);
	}
	//fgets(where we are storing our variable, the number of characters we want to save in our variable,
	//the filename) 
	
	fclose(readfile);
	
	return(0);
}
