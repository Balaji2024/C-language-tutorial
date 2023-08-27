#include<stdio.h>
void main()
{
	int h1,h2,h3,m1,m2,m3,s1,s2,s3,sec,sec1,sec2,temp;
	printf("Enter first time....\n");
	printf("Enter hour1 ");
	scanf("%d",&h1);
	printf("Enter minute1 ");
	scanf("%d",&m1);
	printf("Enter second1 ");
	scanf("%d",&s1);
	printf("Enter second time....\n");
	printf("Enter hour2 ");
	scanf("%d",&h2);
	printf("Enter minute2 ");
	scanf("%d",&m2);
	printf("Enter second2 ");
	scanf("%d",&s2);
	
	sec1=3600*h1+60*m1+s1;
	sec2=3600*h2+60*m2+s2;
	
	if(sec1>sec2)
	{
		temp=sec1;
		sec1=sec2;
		sec2=temp;
		
	}
	
	sec=sec2-sec1;
	
	h3=sec/3600;
	sec=sec%3600;
	m3=sec/60;
	sec=sec%60;
	s3=sec;
	
	printf("Difference Time.....");
	printf("\nhour = %d\nminute = %d\nsecond = %d",h3,m3,s3);
	
	
}
