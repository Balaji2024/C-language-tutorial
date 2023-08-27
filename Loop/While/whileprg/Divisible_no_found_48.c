#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,sum=0;
	printf("Enter lower limit ");
	scanf("%d",&a);
	printf("Enter upper limit ");
	scanf("%d",&b);
    printf("Number is divisible by 5 = ");
	while(a<=b)
	{
	
		if(a%5==0)
		{
			printf("%d ",a);
			sum=sum+a;
		}
		a++;
	}
	if(sum==0)
	printf("\nNumber not found");
	else
	printf("\nAddition is = %d",sum);
	
	
}
