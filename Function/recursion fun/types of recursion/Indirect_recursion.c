#include <stdio.h>  
// declaration of the odd and even() function  
void odd(); // Add 1 when the function is odd()   
void even(); // Subtract 1 when the function is even  
int num = 1; // global variable   
void odd ()  
{     
    // if statement check and execute the block till n is less than equal to 10  
    if (num <= 10)  
    {  
        printf (" %d ", num + 1);  // print a number by adding 1  
        num++; // increment by 1  
        even(); // invoke the even function  
    }  
    return;  
    
}  
void even ()  
{  
    // if block check the condition that n is less than equal to 10  
    if ( num <= 10)  
    {  
        printf (" %d ", num - 1); // print a number by subtracting 1   
        num++;  
        odd(); // call the odd() function  
    }  
    return;  
}  
 
int main ()  
{  
    odd(); // main call the odd() function at once  
    return 0;  
}  
