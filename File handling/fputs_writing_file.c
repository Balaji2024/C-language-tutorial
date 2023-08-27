#include <stdio.h>  
void main()
{  
   FILE *fp; 
   char str[10]="BALAJI"; 
   fp = fopen("puts.txt", "w");//opening file  
   fputs(str,fp);//writing a complete string into file  
   fclose(fp);//closing file  
}  
