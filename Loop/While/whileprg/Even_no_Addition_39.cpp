#include<stdio.h>
#include<stdio.h>
void main()
{
	int a=1,b,sum=0;
	while(a<=100)
	{
		b=a%2;
		if(b==0)
		{
		//	printf("%d",a);
	        sum=sum+a;
		}
		a++;
	}
	
	printf("Addition of even number is %d",sum);
}
