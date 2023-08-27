#include<stdio.h>
#include<string.h>
int modify(char [], char []);
void main ()
{
	char str1[]= "Balaji";
	char str2[]= "Jare";
	modify(str1,str2);
}
int modify(char str1[],char str2[])
{
	int i,length=0;
	for(i=0;str1[i]!='\0';i++)
	{
		length=length+1;
	}
	str2[0]='Z';
	printf("Length of string 1 is :%d\n",length);
	printf("Both the strings are : %s %s",str1,str2);
}
