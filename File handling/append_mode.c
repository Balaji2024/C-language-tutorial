#include<stdio.h>  
#include<conio.h> 
#include<stdlib.h> 
void main()
{  
FILE *fp=NULL;  
char str[50];  
fp=fopen("print.txt","a");  
if(fp==NULL)
{
	printf("Error");
	exit(1);
}
printf("Enter the content you want to append");
gets(str); 

fprintf(fp,"\n%s",str); 
printf("Sucessfully appended");
fclose(fp);  
}  


