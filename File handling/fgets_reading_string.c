#include<stdio.h>  
#include<conio.h> 
#include<stdlib.h> 
void main()
{  
FILE *fp=NULL;  
char str[10];  
fp=fopen("get.txt","r");  
if(fp==NULL)
{
	printf("Error");
	exit(1);
}
  
fgets(str,5,fp);
printf("%s",str); // It read only 4 character becoz string 
//size is 5 : 4 character and 1 for null character it does not print complete string
fclose(fp);  
}  


