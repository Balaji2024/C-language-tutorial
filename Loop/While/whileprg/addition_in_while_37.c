#include<stdio.h>
void main()
{
	int a,b=1,sum=0;
	while(b<=5)
	{
		printf("Enter number ");
		scanf("%d",&a);
		sum=sum+a;
		b++;
		
	}
	printf("Addition is = %d",sum);
	
	
}
