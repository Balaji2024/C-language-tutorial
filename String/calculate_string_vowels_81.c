#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20];
	int i,len,count=0;
	printf("Enter s1 string\n");
	gets(s1);
	len=strlen(s1);
	for(i=0;i<len;i++)
	{
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
		{
			count++;
		}
	}
	printf("Number of vowels %d times ",count);	
} 
