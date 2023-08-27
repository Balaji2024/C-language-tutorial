#include<stdio.h>
void main()
{
	int sub1,sub2,sub3;
	float total,per;
	printf("Sub1 ");
	scanf("%d",&sub1);
	printf("Sub2 ");
	scanf("%d",&sub2);
	printf("Sub3 ");
	scanf("%d",&sub3);
	
	total=sub1+sub2+sub3;
	per=total/3;
	
	if(sub1>=35&&sub2>=35&&sub3>=35)
	{
		printf("Total = %0.2f\n",total);
		printf("Percentage = %0.2f\n",per);
		if(per>60)
		printf("Distinction class ");
		else if(per>=50&&per<=60)
		printf("First class ");
		else
		printf("Second class ");
			
	}
	else if(sub1>=35&&sub2>=35||sub2>=35&&sub3>=35||sub1>=35&&sub3>=35)
	printf("ATKT");
	else 
	printf("Fail ");
	
	
}
