#include<stdio.h>  
int sum(void);  
void main()  
{  
    int result;   
    result = sum();  
    printf("The sum is %d",result);  
}  
int sum()  
{  
    int a,b,c;   
    printf("\nEnter two numbers\n");  
    scanf("%d %d",&a,&b);  
    c=a+b;
    return c;   
}  
