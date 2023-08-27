#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	int a[5];
	int *p;
	p=&a[0];
	printf("Enter five number\n");
	for(i=1;i<=5;i++)
	{
		scanf("%d",p);
		p++;
	}
	printf("Number are\n");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
}
