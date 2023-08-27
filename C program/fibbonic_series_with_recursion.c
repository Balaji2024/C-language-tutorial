#include<stdio.h>
#include<math.h>
int fibbonic(int);
void main()
{
	int a,b,num,i,fab;
	printf("Enter the number of term ");
	scanf("%d",&num);
	printf("The fibbonic series are  ");
	for(i=0;i<num;i++)
	{
		fab=fibbonic(i);
		printf(" %d",fab); //0,1,1,2......
	}
}
int fibbonic(int i)
{
	if(i==0)
		return 0;
	else if(i==1)
		return 1;
	else
		return fibbonic(i-1)+fibbonic(i-2);		
}
