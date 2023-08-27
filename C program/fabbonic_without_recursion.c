#include<stdio.h>
#include<math.h>
void main()
{
	int a=0,b=1,c,i,n;
	printf("Enter number of elements ");
	scanf("%d",&n);
	printf("The febbonic series are %d %d",a,b);
	for(i=0;i<=n;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		
	}
	
}
