#include<stdio.h>
#include<math.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	struct student s={16,"Balaji",85000};
	struct student *ptr=&s;
	printf("%d %s %f\n",(*ptr).rollno,ptr->name,ptr->marks);

	
	
}
