#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter rows ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("%c",64+j);
		}
		printf("\n");
	}

}
