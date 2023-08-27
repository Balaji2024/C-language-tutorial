#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c=0,d;
	printf("Enter number ");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
		
	}
	if(d==c)
	printf("Number is palendrome");
	else
	printf("Number is not palendrome ");
	
}
