#include<stdio.h>
#include<math.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};
void main()
{
	struct employee e1={1,"Balaji",75000};
	printf("%d %s %f",e1.id,e1.name,e1.salary);
	
	
}
