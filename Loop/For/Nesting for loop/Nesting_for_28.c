#include<stdio.h>
void main()
{
	int i,j,n,a;
	printf("Enter rows ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(a=1;a<=(n-i);a++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}

