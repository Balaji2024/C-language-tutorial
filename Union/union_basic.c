#include<stdio.h>
#include<string.h>
union student
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	union student s;
	s.rollno=65;
	//strcpy(s.name,"Balaji");
	//s.marks=95;
	printf("%d\n%s\n%f\n",s.rollno,s.name,s.marks);

	
	
}
