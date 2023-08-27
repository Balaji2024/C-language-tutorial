#include<stdio.h>
void main()
{
	int m[4][2][2],i,j,k;
	printf("Enter array element\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&m[i][j][k]);
			}
		}
	}
	printf("Matrix is\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d ",m[i][j][k]);
			}
		}
		printf("\n");
	}
}
