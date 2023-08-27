#include<stdio.h>
#include<math.h>
void main()
{
	void *vp;
	int a=5;
	float b=32.43;
	char ch='A';
	
	vp=&a;
	printf("%d\n",*(int *)vp);
	vp=&b;
	printf("%.2f\n",*(float *)vp);
	vp=&ch;
	printf("%c",*(char *)vp);
	
}
