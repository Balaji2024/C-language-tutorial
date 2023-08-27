#include<stdio.h>
void main()
{
	int m[3][3],i,j;
	printf("Enter array element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("Matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("Tranpose of matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",m[j][i]);
		}
		printf("\n");
	}
}
