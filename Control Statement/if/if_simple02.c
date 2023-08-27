#include<stdio.h>
void main()
{
	int age;
	printf("Enter age ");
	scanf("%d",&age);
	if(!age)              // ! it acts as-- true convert in false and false convert into true
	                      // when i take input 0(false) then it convert into true(1)
					  //  & when i take input  1(true) then it convert into false(0) 
	{
		printf("A");
		printf("B");
		
	}
	
	printf("C");
	
	
}
