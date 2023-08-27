#include<stdio.h>  
#include<stdlib.h>  
int main()
 {  
    int n,i,*ptr;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    
    ptr=(int*)calloc(n,sizeof(int));  //memory allocated using malloc 
	// Check if the memory has been successfully
	// allocated by malloc or not   
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",(ptr+i));     
    }    
    printf("\nThe entered values are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	} 
    free(ptr);     
    return 0;  
}    
