#include<stdio.h>
#include<math.h>
void main()
{
	int i,a[5],m;
	printf("Enter five number ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		m=a[i]%5;
		if(m==0)
     	printf("Number is divisible by 5 is %d\n",a[i]);
     	else
     	printf("Number is not present\n");
	}

	
}
