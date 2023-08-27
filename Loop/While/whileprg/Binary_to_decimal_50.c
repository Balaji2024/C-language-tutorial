#include<stdio.h>
#include<math.h>
void main()
{
	int n,d=0,m,i=0;
	printf("Enter binary number ");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		d=d+m*pow(2,i);
		i++;
		n=n/10;
		
	}
	
	printf("Decimal number = %d",d);
	
}
