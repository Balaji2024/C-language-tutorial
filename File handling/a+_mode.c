#include<stdio.h>  
#include<conio.h> 
#include<stdlib.h> 
void main()
{  
FILE *fp=NULL;  
char ch;
fp=fopen("a.txt","a+");  
if(fp==NULL)
{
	printf("Error");
	exit(1);
}

fputs("diksha",fp);
rewind(fp);
while(!feof(fp))
{
	ch=fgetc(fp);
	printf("%c",ch);
}


fclose(fp);  
}  


