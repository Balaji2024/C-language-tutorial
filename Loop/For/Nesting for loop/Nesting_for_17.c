#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,n;
	printf("Enter rows ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		
	}
	getch();
}
