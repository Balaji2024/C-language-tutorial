#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];
	printf("Enter s1 string\n");
	gets(s);
	strlwr(s);
	printf("Stmall letter is : %s\n",s);	
}
