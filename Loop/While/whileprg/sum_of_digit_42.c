#include<stdio.h>
void main()
{
	int a,b,sum=0,i;
	
	for(i=1;i<=4;i++)
	{
	
	printf("Enter number ");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
	    a=a/10;
		
	}
    }
    for(i=1;i<=4;i++)
    {
    	printf("Sum of digit %d\n",sum);
	}

}
