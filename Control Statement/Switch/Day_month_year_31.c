#include<stdio.h>
void main()
{
	int d,m,y;
	printf("Enter day ");
	scanf("%d",&d);
	printf("Enter month ");
	scanf("%d",&m);
	printf("Enter year ");
	scanf("%d",&y);
	
	switch(m)
	{
		case 1:
			printf("%d-January-%d",d,y);
			break;
			
		case 2:
		    printf("%d-February-%d",d,y);
			break;
			
		case 3:
		    printf("%d-March-%d",d,y);
			break;	
			
		case 4:
		    printf("%d-April-%d",d,y);
			break;		
			
		case 5:
		    printf("%d-May-%d",d,y);
			break;
			 
		case 6:
		 	printf("%d-June-%d",d,y);
			break;	
			
		case 7:
		    printf("%d-July-%d",d,y);
			break;	
			
		case 8:
		    printf("%d-Augest-%d",d,y);
			break;	
			
		case 9:
		    printf("%d-September-%d",d,y);
			break;	
			
		case 10:
		    printf("%d-October-%d",d,y);
			break;	
			
		case 11:
		    printf("%d-November-%d",d,y);
			break;	
			
		case 12:
		    printf("%d-December-%d",d,y);
			break;	
			
		default:
		    printf("Enter valid choice.....");
			
				
	}
}
