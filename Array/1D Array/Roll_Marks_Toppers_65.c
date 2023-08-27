#include<stdio.h>
#include<math.h>
void main()
{
	int i,m,a;
	int roll[5],marks[5];
	printf("Enter roll number\n");
	for(i=0;i<5;i++)
	{
     	scanf("%d",&roll[i]);
	    
	}
	printf("Enter total marks\n");
	for(i=0;i<5;i++)
	{
	    scanf("%d",&marks[i]);
	}
	m=marks[0];
	a=0;
	for(i=0;i<5;i++)
	{
		if(marks[i]>m)
		{
			m=marks[i];
			a=i;
		}
	}
	printf("Topper student is:\nRoll no = %d\nTotal marks = %d",roll[a],marks[a]);

}
