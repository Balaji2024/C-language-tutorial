#include<stdio.h>
#include<stdlib.h>
void main()
{
	int c=1,t,p,sub1,sub2,sub3;
	while(c!=0)
	{
		
	printf("Enter sub1 marks ");
	scanf("%d",&sub1);
	printf("Enter sub2 marks ");
	scanf("%d",&sub2);
	printf("Enter sub3 marks ");
	scanf("%d",&sub3);
	t=sub1+sub2+sub3;
	printf("Total=%d\n",t);
	
	p=t/3;
	printf("Percentage=%d\n",p);
	c=p/10;
	switch(c)
	{
		case 10:
		case 9:
		case 8:	
			printf("Grade is A\n");
			break;
		case 7:
			printf("Grade is B\n");
			break;
		case 6:
			printf("Grade is C\n");
			break;
		
		case 0:
		    exit(0);
			break;
		default:
		    printf("Grade is D\nm");			
    
	}
	
	}
}
