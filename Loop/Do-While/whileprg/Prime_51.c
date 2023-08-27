#include<stdio.h>
#include<math.h>
void main()
{
	int a,b=1,c,ct=0;
	printf("Enter number ");
	scanf("%d",&a);
	do
	{
		
		if(a%b==0)
		{
			ct++;
			
		}
		b++;
	}while(b<=a);
	
	if(ct==2)
	printf("Number is prime ");
	else
	printf("Number is not prime ");
	
	
	
	
}
