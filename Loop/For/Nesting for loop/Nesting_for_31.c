#include<stdio.h>
void main()
{
	int i,j,n,a;
	printf("Enter rows ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(a=2;a<=i;a++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}


