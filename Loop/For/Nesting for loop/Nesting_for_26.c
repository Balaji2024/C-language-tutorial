#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n;
	printf("Enter rows ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j||i==5||j==1)
			printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");
		
	}
	
}
