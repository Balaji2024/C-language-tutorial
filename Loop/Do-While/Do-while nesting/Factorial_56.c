#include<stdio.h>
#include<math.h>
void main()
{
	int f=1,a=1,total=0;
    do
    {
    	do
    	{
    		f=f*a;
		    a++;
		    printf("%d\n",f);
		    total=total+f;
		    
		}while(a<=5);
		
		printf("%d",total);
		
	}while(a<=5);
	
}
