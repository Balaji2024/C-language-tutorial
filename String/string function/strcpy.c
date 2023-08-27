#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	printf("Enter the string\n");
	gets(s1);
	printf("You entered string is : %s\n",s1);
	strcpy(s2,s1);
	printf("String s1 is : %s\n",s1);
	printf("String s2 is : %s",s2);
	
}
