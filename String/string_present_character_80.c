#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],ch;
	int i,len,count=0;
	printf("Enter s1 string\n");
	gets(s1);
	printf("Enter character ");
	scanf("%c",&ch);
	len=strlen(s1);
	for(i=0;i<len;i++)
	{
		if(s1[i]==ch)
		{
			count++;
		}
	}
	printf("Character found %d times ",count);	
} 
