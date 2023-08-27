#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,f=0,c,ct;
	printf("Enter lower limit ");
	scanf("%d",&a);
	printf("Enter upper limit ");
	scanf("%d",&b);
	do
	{
		c=1;
		ct=0;
		do
		{
			if(a%c==0)
		{
			ct++;
			
		}
		c++;
		}while(c<=a);
		if(ct==2&&f==0)
		{
			printf("Prime number %d ",a);
			f=1;
		}
		else if(ct==2)
		printf("%d ",a);
		a++;
		
	}while(a<=b);
	if(f==0)
	printf("Number not found ");
	
	
	
	
	
}
