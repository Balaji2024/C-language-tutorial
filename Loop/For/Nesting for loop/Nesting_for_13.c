#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n,a=1;
	printf("Enter rows ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(a=1;a<=(n-i);a++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
			a++;
		}
		printf("\n");
		
	}
	
}
