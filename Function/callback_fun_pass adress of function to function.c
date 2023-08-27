#include <stdio.h>
/* Function declarations */
void Morning();
void Evening();
void Night();
void display();

void Morning() 
{
    printf("Good morning!\n");
}
void Evening() 
{
    printf("Good evening!\n");
}
void Night() 
{
    printf("Good night!\n");
}  

void display(void(*ptr)())
{
    // Call ptr function pointer
    (*ptr)();
}

void main()
{
    // Pass pointer to greetMorning function 
    display(Morning); 
    display(Evening);
    display(Night);
}
