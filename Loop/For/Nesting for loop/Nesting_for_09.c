#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n;
	printf("Enter rows ");
	scanf("%d",&n);
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		
	}
	
}
