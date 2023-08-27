#include<stdio.h>  
#include<conio.h> 
#include<stdlib.h> 
void main()
{  
FILE *fp=NULL;  
char ch;  
fp=fopen("get.txt","r");  
if(fp==NULL)
{
	printf("Error");
	exit(1);
}
  
while(!feof(fp))
{  
  ch=fgetc(fp);
  printf("%c",ch);  // It read complete string by using loop with end of file function
}  
fclose(fp);  
}  


