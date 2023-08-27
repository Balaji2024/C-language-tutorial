#include<stdio.h>
#include<stdlib.h>
void main()
{
	int d,m,y;
	
	while(m!=13)
	{
	printf("Enter day ");
	scanf("%d",&d);
	printf("Enter month ");
	scanf("%d",&m);
	printf("Enter year ");
	scanf("%d",&y);
	switch(m)
	{
		case 1:
			printf("%d-January-%d\n",d,y);
			break;
		case 2:
			printf("%d-Feb-%d\n",d,y);
			break;
		case 3:
			printf("%d-Mar-%d\n",d,y);
			break;
		case 4:
			printf("%d-April-%d\n",d,y);
			break;
		case 5:
			printf("%d-May-%d\n",d,y);
			break;
		case 6:
			printf("%d-Jun-%d\n",d,y);
			break;
		case 7:
			printf("%d-Jul-%d\n",d,y);
			break;
		case 8:
			printf("%d-Aug-%d\n",d,y);
			break;
		case 9:
			printf("%d-Sept-%d\n",d,y);
			break;
		case 10:
			printf("%d-Oct-%d\n",d,y);
			break;
		case 11:
			printf("%d-Nov-%d\n",d,y);
			break;
		case 12:
			printf("%d-Dec-%d\n",d,y);
			break;
		case 13:
		    exit(0);
			break;
		default:
			printf("Enter a valid choice\n");
				
    }
	}
}
