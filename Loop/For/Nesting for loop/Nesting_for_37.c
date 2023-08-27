#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter rows ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%c",64+j);
		}
		printf("\n");
	}

}
