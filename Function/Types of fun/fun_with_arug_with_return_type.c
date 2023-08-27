#include<stdio.h>  
int sum(int, int);  
void main()  
{  
    int a,b,result;   
    printf("Enter two numbers:\n");  
    scanf("%d %d",&a,&b);  
    result = sum(a,b);  
    printf("The sum is : %d",result);  
}  
int sum(int a, int b)  
{  
    int c;
    c=a+b;
    return c;  
}   
