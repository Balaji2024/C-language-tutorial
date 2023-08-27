#include<stdio.h>
#include<math.h>
void main()
{
	int a,arm,b,d,c,x;
	for(a=1;a<=1000;a++)
	{
		arm=0;
		b=a;
		c=a;
		
		for(;b>0;b=b/10)
		{
			
			x=b%10;
			arm=(x*x*x)+arm;
		}
		if(c==arm)
		printf("%d\n",arm);
	}
}
