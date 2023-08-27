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
	int i;
	struct student s[3];

	for(i=0;i<3;i++)
	{
		printf("Enter student info %d:\n",i+1);
    	scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
	
	}
	for(i=0;i<3;i++)
	{
		printf("Student info is %d:\n",i+1);
    	printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
	}
	
	
	
}
