#include <stdio.h> 
void disp()
{
extern int a;
printf("In disp function value of a = %d\n",a);
a= a + 5; 
}
void show() 
{
extern int a; 
printf ("In show function value of a = %d\n",a);
a = a + 100;
}
int a; 
void main()
{
   printf("In main function value of a = %d\n",a);
   a=2;
   show (); 
   printf("Value of a = %d\n",a);
   disp();
   printf("Value of a = %d\n",a);
}
