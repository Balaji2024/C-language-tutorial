#include<stdio.h>
void main()
{
	int a,b,c,sum=0;
	printf("Enter lower limit ");
	scanf("%d",&a);
	printf("Enter upper limit ");
	scanf("%d",&b);
	printf("Even numbers are\n");
	
	while(a<=b)
	{
		c=a%2;
		if(c==0)
		{
			printf("%d\n",a);
			sum=sum+a;
		}
		
		a++;
	}
	printf("Addition of even number is %d",sum);
	
}
