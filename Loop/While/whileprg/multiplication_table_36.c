#include<stdio.h>
void main()
{
	int a,b=1,c=0;
	printf("Enter number\n");
	scanf("%d",&a);
	printf("Multiplication table....\n");
	while(b<=10)
	{
		c=a*b;
		b++;
		
    	printf("%d\n",c);
	}
	
}
