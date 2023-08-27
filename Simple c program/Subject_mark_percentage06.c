#include<stdio.h>
void main()
{
	int sub1,sub2,sub3;
	float per,total;
	printf("Enter sub1 marks ");
	scanf("%d",&sub1);
	printf("Enter sub2 marks ");
	scanf("%d",&sub2);
	printf("Enter sub3 marks ");
	scanf("%d",&sub3);
	total=sub1+sub2+sub3;
	printf("Total = %.0f\n",total);
	per=total/3;
	printf("Percentage = %0.2f",per);
	
}
