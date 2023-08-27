#include<stdio.h>
#include<math.h>
void main()
{
	int i,m,a=0;
	int num[5];
	printf("Enter 5 number\n");
	for(i=0;i<5;i++)
	{
     	scanf("%d",&num[i]);
	}
	printf("Numbers are divisible by 5 are : ");
	for(i=0;i<5;i++)
	{
		if(num[i]%5==0)
		{
			printf("%d ",num[i]);
			a++;
		}
	}
	if(a==0)
	{
		printf("Not found ");
	}
	


}
