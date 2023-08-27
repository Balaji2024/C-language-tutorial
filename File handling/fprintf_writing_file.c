#include<stdio.h>  
#include<conio.h> 
#include<stdlib.h> 
void main()
{  
FILE *fp=NULL;  
char str[10]="BALAJIJARE";  
fp=fopen("print.txt","w");  
if(fp==NULL)
{
	printf("Error");
	exit(1);
}

fprintf(fp,"%s",str); 
fclose(fp);  
}  


