#include<stdio.h>  
void sum(float, float);  
void main()  
{  
    float a,b;    
    printf("\nEnter two numbers:\n");  
    scanf("%f %f",&a,&b);  
    sum(a,b);  
}  
void sum(float a, float b)  
{
    float sum=0;
    sum=a+b;
    printf("The sum is %f",sum);      
}  
