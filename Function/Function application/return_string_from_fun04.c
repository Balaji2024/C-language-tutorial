#include<stdio.h>
char* disp();

void main()
{
    char *str;
	str=disp();
   // str[0]='Z';   
	printf("String is :%s",str);
}
char* disp()
{
	static char str[]="balaji";
	return str;
}
