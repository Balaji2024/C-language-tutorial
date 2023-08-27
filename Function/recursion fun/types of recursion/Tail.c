#include <stdio.h>  
// function definition  
void fun1( int a)  
{  
    // if block check the condition  
    if (a<1)  
        return;  
    else  
        printf ("%d\n",a); // print the number  //Tail recursion
        fun1(a/2);      // recursive call at the end in the fun() function   
        //printf ("Number is: %d\n",a);   //Non-tail recursion
}  
void main ()  
{  
    fun1(10); // pass 7 as integer argument    
}  
