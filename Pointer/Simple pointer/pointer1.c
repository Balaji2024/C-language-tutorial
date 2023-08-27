#include<stdio.h>
#include<math.h>
void main()
{
	char ch='A';
	char *pt;
	pt=&ch;
	printf("value = %c\n",ch);
	printf("addrass = %p\n",ch);
	printf("value = %c\n",pt);
	printf("address = %p\n",pt);
	printf("value = %c\n",*pt);
	printf("address = %p",*pt);
	
}
