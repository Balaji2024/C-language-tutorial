#include<stdio.h>
#include<math.h>
void main()
{
	int i,a[5];
	printf("Enter five element of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even numbers are ");
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		printf("%d ",a[i]);
	
	}
	
}
