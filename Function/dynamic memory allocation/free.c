#include<stdio.h>  
#include<stdlib.h>  
int *display()
{
	int n,i,*ptr;
	
    ptr=(int*)malloc(3*sizeof(int));  //memory allocated using malloc 
	// Check if the memory has been successfully
	// allocated by malloc or not   
	  
    printf("Enter elements of array: ");    
    for(i=0;i<3;i++)    
    {    
        scanf("%d",(ptr+i));     
    }  
	return ptr;  
}
int main()
 {  
    int i,*ptr1;
	ptr1 = display();    
	printf("\nThe entered values are:");
	for(i=0;i<3;i++)
	{
		printf("%d\t",*(ptr1+i));
	} 
    free(ptr1);     
    return 0;  
}    
