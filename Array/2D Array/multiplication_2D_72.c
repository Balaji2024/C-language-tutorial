#include<stdio.h>
void main()
{
	int a[3][3],b[3][2],c[3][2],i,j,k,sum=0;
	printf("Enter first array element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second array element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("first matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("second matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Multiplication of two matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
