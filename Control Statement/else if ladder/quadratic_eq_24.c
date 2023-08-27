#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float r1,r2,s,x;
	printf("Enter a ");
	scanf("%d",&a);
	printf("Enter b ");
	scanf("%d",&b);
	printf("Enter c ");
	scanf("%d",&c);
	
	s=b*b-4*a*c;
	if(s>0)
	{
		x=sqrt(s);
		r1=(-b+x)/(2.0*a);
		r2=(-b-x)/(2.0*a);
		printf("Root1 = %f\nRoot2 = %f",r1,r2);
		
	}
	else if(s==0)
	{
		r1=-b/(2.0*a);
		printf("Root1 = %f",r1);
		
	}
	else
	printf("Roots are imaginary ");
	
}
