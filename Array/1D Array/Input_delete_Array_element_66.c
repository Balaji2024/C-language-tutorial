#include<stdio.h>
#include<math.h>
void main()
{
	int i,loc,a[5];
	printf("Enter five number ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Enter location ");
	scanf("%d",&loc);
	for(i=loc;i<4;i++)
	{
		a[i]=a[i+1];
	}
	a[4]=0;
	printf("New number ");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
}
