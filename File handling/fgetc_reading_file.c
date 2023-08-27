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
    
  ch=fgetc(fp);
  printf("%c",ch);   // It read only single character from the complete string
 
fclose(fp);  
}  


