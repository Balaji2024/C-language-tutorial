#include<stdio.h>
#include<math.h>
void main()
{
	int i,a[5],b[5];
	printf("Enter 5 number of first array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	printf("Second Array\n");
	for(i=0;i<5;i++)          // for(i=4;i>=0;i--) -----For reverse number
	
	{
		printf("%d\n",b[i]);
	}
	
}
