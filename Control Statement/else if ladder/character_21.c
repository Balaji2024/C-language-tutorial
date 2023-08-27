#include<stdio.h>
void main()
{
	char ch;
	printf("Enter character ");
	scanf("%c",&ch);
	
	if(ch>=65&&ch<=90)
	printf("Capital letter ");
	else if(ch>=97&&ch<=122)
	printf("Small letter ");
	else if(ch>=48&&ch<=57)
	printf("Digit character ");
	else
	printf("Special character ");
	
	
}
