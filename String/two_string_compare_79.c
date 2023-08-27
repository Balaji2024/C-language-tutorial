#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int x;
	printf("Enter s1 string\n");
	gets(s1);
	printf("Enter s2 string\n");
	gets(s2);
	x=strcmp(s1,s2);
	if(x==0)
	printf("String are same ");
	else
	printf("String are different ");
} 
