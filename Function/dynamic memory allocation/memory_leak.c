#include<stdio.h>  
#include<stdlib.h>  
int main()
 {  
    int a=1,*ptr;
    while(a<50)
    {
    	printf("Memory leak demo\n");
    	ptr=(int*)malloc(40000*sizeof(int));
    	
    	printf("continue?? press 1 for continue");
    	scanf("%d",&a);
    	free(ptr);
	}
	  
}    
