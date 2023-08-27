#include<stdio.h>
char* disp();

void main()
{
	char *str;
	str=disp();
	printf("String is :%s",str);
}
char* disp()
{
	return "Balaji";
}
