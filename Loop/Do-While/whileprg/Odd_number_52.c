#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,ct=0;
	printf("Enter lower limit ");
	scanf("%d",&a);
	printf("Enter upper limit ");
	scanf("%d",&b);
	printf("Odd number ");
	
	do
	{
		if(a%2==1)
		{
			printf(" %d ",a);
			ct=ct+a;
		}
		a++;
	}while(a<=b);
	
	printf("\nTotal of odd numbers = %d",ct);

}
