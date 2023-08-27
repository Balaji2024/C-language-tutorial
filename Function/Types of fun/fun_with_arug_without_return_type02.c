#include<stdio.h>  
void EvenOdd(int);  
void main()  
{  
    int a;    
    printf("\nEnter numbers:\n");  
    scanf("%d",&a);  
    EvenOdd(a);  
}  
void EvenOdd(int a)  
{
    if(a%2==0)
    printf("Number is even");
    else
    printf("Number is odd");   
}  
