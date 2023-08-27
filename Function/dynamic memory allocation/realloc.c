#include<stdio.h>  
#include<stdlib.h>  
int main()
 {  
    int n,i,*ptr,*ptr1;    
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
    printf("Enter updated value:");
    scanf("%d",&n);
    ptr1=(int*)realloc(ptr,n*sizeof(int));
    printf("Previous address = %d updated address = %d",ptr,ptr1);
    printf("Enter values ");
   
    for(i=0;i<n;i++)
    {
    	printf("%d",*(ptr1+i));
	}
    free(ptr1);     
    return 0;  
}    
