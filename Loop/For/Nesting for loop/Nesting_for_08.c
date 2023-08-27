#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n;
	printf("Enter rows ");
	scanf("%d",&n);
	
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
		
	}
	
}
