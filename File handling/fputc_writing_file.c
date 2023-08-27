#include <stdio.h>  
void main()
{  
   FILE *fp; 
   char ch='C'; 
   fp = fopen("put.txt", "w");//opening file  
   fputc(ch,fp);//writing single character into file  
   fclose(fp);//closing file  
}  
