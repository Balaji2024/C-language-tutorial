#include <stdio.h>

int fabbo(int a)
{
    // first base condition check
    if (a == 0)
    {
        return 0; // retuning 0, if condition mets
    }
    // second base condition check
    else if (a == 1)
    {
        return 1; // returning 1, if condition mets
    }
    // else calling the fibonacci() function recursively, till we get to the base conditions
    else
    {
        return fabbo(a - 1) + fabbo(a - 2); // recursively calling the fibonacc() function and then adding them
    }
}

int main()
{
    int a,i;       // variable to store how many elements to be displayed in the series
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &a);       // taking user input

    for (i = 0; i < a; i++)
    {
        printf(" %d",fabbo(i)); // calling fibonacci() function for each iteration and printing the returned value
    }

    return 0;
}

