#include<stdio.h>
const char* disp();

void main()
{
	const char *str;
	str=disp();
	//str[0]='Z';
	printf("String is :%s",str);
}
const char* disp()
{
	const char* str="balaji";
	return str;
}
