#include<stdio.h>
void main()
{
	int a,b,c,d=0;
	printf("Enter number ");
	scanf("%d",&a);
	printf("Enter digit ");
	scanf("%d",&b);
	while(a>0)
	{
		c=a%10;
		if(c==b)
		{
			d++;
		}
		a=a/10;
		
	}
	if(d>1)
	printf("%d digit ie present %d times ",b,d);
	else 
	printf("Digit not present ");
	
}
