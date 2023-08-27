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
	printf("Lower triangular matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j<=i) //if(j>=i) --upper triangular matrix 
			         //if(j==i) --diagonal matrix
			printf("%d ",m[i][j]);
			else
			printf("  ");
		}
		printf("\n");
	}
}
