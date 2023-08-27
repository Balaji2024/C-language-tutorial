#include<stdio.h>
#include<math.h>
void main()
{
	int i,a[5],m;
	printf("Enter five element of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=0;i<5;i++)
	{
		if(m<a[i])
		{
			m=a[i];
		}
	}
	printf("Max number = %d",m);
}


