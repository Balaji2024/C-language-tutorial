#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,d,arm=0,x;
	printf("Enter number ");
	scanf("%d",&a);
	b=a;
	for(;a>0;a=a/10)
	{
		d++;
		
	}
	printf("Number of digit =%d\n",d);
    a=b;
   
    for(;a>0;a=a/10)
    {
    	x=a%10;
    	arm=pow(x,d)+arm;
    
	}
    if(b==arm)
    printf("Number is armstrong");
    else
    printf("Number is not armstrong");
    
}
