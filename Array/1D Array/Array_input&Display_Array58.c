#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	int a[5]; 
	printf("Enter 5 integer number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
			printf("Array element at index %d is: %d\n",i,a[i]);
	
	}
	printf("Array element in reverse form\n");
	for(i=4;i>=0;i--)
	{
			printf("Array element at index %d is: %d\n",i,a[i]);
		
	}
	
	
}
