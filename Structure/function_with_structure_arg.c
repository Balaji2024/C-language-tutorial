#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	float salary;
};
struct employee disp(struct employee e3)
{
	printf("Info of e3\n");
	printf("%d %s %f\n",e3.id,e3.name,e3.salary);
}
void main()
{
	struct employee e3;

	printf("Enter info of e3\n");
	scanf("%d %s %f",&e3.id,&e3.name,&e3.salary);
    disp(e3);
	
}
