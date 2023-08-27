#include <stdio.h>  
#include<stdlib.h>
#include<string.h>
void main()
{  
   FILE *fp; 
   int i;
   char str[10]="BALAJI10"; 
   fp = fopen("puts.txt", "w");//opening file 
   
   for(i=0;i!=strlen(str);i++)
   {
     fputc(str[i],fp);//writing a complete character into file  
   } 
   fclose(fp);//closing file  
}  
