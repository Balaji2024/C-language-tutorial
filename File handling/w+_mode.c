#include<stdio.h>  
#include<conio.h> 
#include<stdlib.h> 
void main()
{  
FILE *fp=NULL;  
//char str[50]; 
char ch; 
fp=fopen("w.txt","w+");  
if(fp==NULL)
{
	printf("Error");
	exit(1);
}
fputs("Jenny",fp);
rewind(fp);
while(!feof(fp))
{
	ch=fgetc(fp);
	printf("%c",ch);
}

fclose(fp);  
}  


