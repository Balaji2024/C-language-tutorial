#include <stdio.h>
#include <math.h>
int main()
{
    //Formatted input function--scanf
    int a;
    scanf("%d",&a);

    int b,c;
    scanf("%3d %d",&b,&c);

    int d;
    scanf("%f",&d);

    //Formatted output function --printf
    printf("%d\n",a);
    printf("%d\n%d\n",b,c);
    printf("%f\n",d);

    printf("%6d\n",a);
    printf("%-6d\n",a);
    printf("%0d\n",a);
    printf("%d\n",a);

    float f = 1234.256;
    printf("%f\n",f);
    printf("%10.2f\n",f);
    printf("%-10.2f\n",f);
    printf("%010.2f\n",f);

    int x;
    x = printf("Balaji");
    printf("%d\n", x); // print balaji and it calculate the size of character(character length) in the printf

    int y;
    y = printf("%d", printf("Balaji"));
    printf("%d", y);    // print balaji and it calculate the size of character(character length) in the printf 
                        //and also calculate the how many number of digit

    return 0;
}