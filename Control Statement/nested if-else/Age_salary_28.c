#include<stdio.h>
void main()
{
	int age,sal;
	printf("Enter age ");
	scanf("%d",&age);
	printf("Enter salary ");
	scanf("%d",&sal);
	
	if(age>50)
	{
		if(sal<60000)
		{
			sal=sal+10000;
			printf("Salary =%d\n",sal);
		}
		else
		{
			sal=sal+5000;
			printf("Salary =%d\n",sal);
		}
	}
	else
	{
		sal=sal+3000;
		printf("Salary =%d\n",sal);
	}
	printf("End of program ");
	
}
