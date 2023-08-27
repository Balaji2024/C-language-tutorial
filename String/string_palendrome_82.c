#include<stdio.h>
#include<string.h>
void main()
{
	int x;
	char s1[20],s2[20];
	
	printf("Enter s1 string\n");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	printf("%s",s1);
	x=strcmp(s1,s2);
	if(x==0)
	printf("Number is palendrome ");
	else
	printf("Number is not palendrome ");	
} 
