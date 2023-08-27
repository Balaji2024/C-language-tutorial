#include<stdio.h>
#include<math.h>
void main()
{
	int i,a[5],total=0,ct=0;
	printf("Enter five sub. marks\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		total=total+a[i];
	}
	printf("Total=%d\n",total);
	for(i=0;i<5;i++)
	{
		if(a[i]<40)
		{
			ct++;
		}
		
	}
	if(ct!=0)
	printf("Student is fail in %d subject ",ct);
	else
	printf("Pass in all subject ");
	
}
