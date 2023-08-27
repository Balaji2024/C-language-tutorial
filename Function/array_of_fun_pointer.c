#include <stdio.h>
/* Function declarations */
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);

void add(int a,int b)
{
    printf("Addition is = %d\n",a+b);
}
void sub(int a,int b)
{
    printf("Subtraction is = %d\n",a-b);
}
void mul(int a,int b)
{
    printf("Multiplication is = %d\n",a*b);
}  

void div(int a,int b)
{
    printf("Division is = %d\n",a/b);
}


void main()
{
    int ch,a,b;
    void (*fptr[10])(int,int)={add,sub,mul,div};
    
    printf("0 for addition\n1 for subtraction\n2 for multiplication\n3 for division\n");
    printf("Enter choice\n");
    scanf("%d",&ch);
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    (*fptr[ch])(a,b);
}

