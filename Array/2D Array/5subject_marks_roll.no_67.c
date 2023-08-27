#include<stdio.h>
void main()
{
	int roll[5],m[5][3],i,j,k,f=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter roll number\n");
		scanf("%d",&roll[i]);
		for(j=0;j<3;j++)
		{
			printf("Enter %d sub marks",j+1);
			scanf("%d",&m[i][j]);
		}
	}
	printf("Enter roll number to search ");
	scanf("%d",&k);
	for(i=0;i<5;i++)
	{
		if(k==roll[i])
		{
			f=1;
			for(j=0;j<3;j++)
			{
				printf("\nSubject %d marks %d",j+1,m[i][j]);
			}
		}	
	}
	if(f==0)
	{
		printf("Roll number not found");
	}
	
}
