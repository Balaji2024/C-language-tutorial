#include<stdio.h>
void main()
{
	char s[20];
	int i=0;
	printf("Enter the string\n");
	scanf("%s",&s);
	printf("You entered string is : %s",s);
	while(s[i]!='\0')
	{
		i++;
	}
	printf("\nLength of string = %d",i);
	
}
