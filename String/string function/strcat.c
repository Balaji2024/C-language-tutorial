#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	printf("Enter s1 string\n");
	gets(s1);
	printf("Enter s2 string\n");
	gets(s2);
	strcat(s1,s2);
	printf("String s1 is : %s\n",s1);
	printf("String s2 is : %s",s2);
	
}
