#include<stdio.h>
#include"fir.c"
extern void acer();
void main()
{
	
	acer();
	extern int a;
		printf("%d",a);
}
