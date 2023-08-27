#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,d=0;
	printf("Enter first month ");
	scanf("%d",&a);
	printf("Enter last month ");
	scanf("%d",&b);
	
	while(a<=b)
	{
		if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
		{
			d=d+31;
		}
		else if(a==4||a==6||a==9||a==11)
		{
			d=d+30;
		}
		else
		{
			d=d+28;
		}
		
		a++;
		
	}
	
	printf("Total number of days %d",d);
	
	
}
