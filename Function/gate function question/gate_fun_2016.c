#include <stdio.h>   
void fun( int n)  
{  
     int d=1;	
	printf("%d",n);
	printf("%d",d);
	d++;
	if(n>1)
	fun(n-1);
	printf("%d",d);
	 
}  
void main ()  
{  
    fun(3); 
}  
