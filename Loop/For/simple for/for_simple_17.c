#include<stdio.h>
void main()
{
  int i,j;                   
  for(i=1,j=0;i<5,j<=6;j++);  // terminating the for loop then create empty for block
  
  {          // printf block- it is not part of these for loop
  
  	printf("%d %d\n",i,j);
  	i++;
  }
  	  
} 



