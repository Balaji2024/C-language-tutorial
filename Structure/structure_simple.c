#include<stdio.h>
#include<string.h>
#include<math.h>
struct employee
{
	int id;
	char name[20];
	float salary;
}e4={10,"Jare",84544};
void main()
{
	struct employee e1={1,"Balaji",75000};
	struct employee e2;
	e2=e1;
	printf("Info of e1\n");
	printf("%d %s %f\n",e1.id,e1.name,e1.salary);
	printf("Info of e2\n");
	printf("%d %s %f\n",e1.id,e1.name,e1.salary);

	struct employee e3;
	printf("Enter info of e3\n");
	scanf("%d %s %f",&e3.id,&e3.name,&e3.salary);
	printf("Info of e3\n");
	printf("%d %s %f\n",e3.id,e3.name,e3.salary);
	
	printf("Info of e4\n");
	printf("%d %s %f\n",e4.id,e4.name,e4.salary);
	
	struct employee e5;
	e5.id=10;
	strcpy(e5.name,"Balaji");
	e5.salary=95000;
	printf("%d %s %f\n",e5.id,e5.name,e5.salary);

	
}
