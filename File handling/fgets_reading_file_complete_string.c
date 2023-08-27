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
 while(!feof(fp))
{
   fgets(str,6,fp);
   printf("%s",str); // It read complete string by using loop with end of file function
}
fclose(fp);  

}  


