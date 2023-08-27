#include<stdio.h>  
#include<conio.h> 
#include<stdlib.h> 
void main()
{  
FILE *fp=NULL;  
char ch;
fp=fopen("seek.txt","r+");  
if(fp==NULL)
{
	printf("Error");
	exit(1);
}

fseek(fp,7,SEEK_SET);
fputs("Raju",fp);
/*ch=fgetc(fp);
printf("%c",ch);

fseek(fp,-8,SEEK_CUR);
ch=fgetc(fp);
printf("%c",ch);

fseek(fp,-4,SEEK_END);
ch=fgetc(fp);
printf("%c",ch);
*/
fclose(fp);  
}  


