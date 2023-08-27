#include<stdio.h>
#include<math.h>
void main()
{
	int a=0,b=1,c,k=1;
	printf("Fabbonic series ");
	printf("%d %d",a,b);
	while(k<=8)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
		k++;
	}
}
