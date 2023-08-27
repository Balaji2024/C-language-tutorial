#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n,a=1;
	printf("Enter rows ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(a=1;a<=(n-i);a++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
			a++;
		}
		printf("\n");
		
	}
	
}
