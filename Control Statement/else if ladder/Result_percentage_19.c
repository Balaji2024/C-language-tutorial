#include<stdio.h>
void main()
{
	int sub1,sub2,sub3,total;
	float per;
	printf("Enter sub1 marks ");
	scanf("%d",&sub1);
	printf("Enter sub2 marks ");
	scanf("%d",&sub2);
	printf("Enter sub3 marks ");
	scanf("%d",&sub3);
	
	total=sub1+sub2+sub3;
	printf("Total = %d\n",total);
	
	per=total/3;
	printf("Percentage = %0.2f\n",per);
	
	if(per>60)
	printf("Distinction class ");
	else if(per>=50&&per<=60)
	printf("Pass ");
	else
	printf("Fail ");
	
	
	
	
}
