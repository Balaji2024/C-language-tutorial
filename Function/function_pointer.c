#include <stdio.h>  
int add(int,int);    //function declaration
void main()  
{  
   int a,b,result;  
   int (*ptr)(int,int);    // function pointer declaration
   printf("Enter the values of a and b :\n");  
   scanf("%d %d",&a,&b);  
   ptr=add;     // function pointer initialize
   result=ptr(a,b);  // function pointer calling
   printf("Value after addition is : %d",result);  
 
}  
int add(int a,int b)  
{    
    return a+b;       // add this two values and return to the respective function
}  
