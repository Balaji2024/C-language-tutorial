#include<stdio.h>
#include<math.h>
void main()
{
	int a[2][2],i,j,sum=0;
	printf("Enter array element\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("Sum = %d",sum);
}
