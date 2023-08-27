#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

void main()
{
	int a,arec,at,height,base,length,breadth;
	float radius,ac;

	while(a!=4)
	{
	printf("1.Area of circle\n2.Area of triangle\n3.Area of rectangle\n4.exit\n");
	printf("Enter choice ");
	scanf("%d",&a);
	
	switch(a)
	{
		
		default:
		    printf("Enter valid choice.....\n");
		    
		case 1:
			printf("Enter radius ");
			scanf("%f",&radius);
			ac=PI*radius*radius;
			printf("Area of circle = %0.2f\n",ac);
			break;
		case 2:
		    printf("Enter height ");
		    scanf("%d",&height);
		    printf("Enter base ");
		    scanf("%d",&base);
		    at=height*base/2;
		    printf("Area of triangle = %d\n",at);
			break;
		case 3:
		    printf("Enter length ");
		    scanf("%d",&length);
		    printf("Enter breadth ");
		    scanf("%d",&breadth);
		    arec=length*breadth;
		    printf("Area of rectangle = %d\n",arec);
			break;
		case 4:
		    exit(0);
			break;	
		
				
    }
	}
	
}
