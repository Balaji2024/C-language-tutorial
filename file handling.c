#include<stdio.h>         
void main()              
{   struct std
   { int roll;
      char n[20];
	  float per;
     };
struct std S,X;
FILE *fp,*tp;   int i,c,k,f;
printf("1. Add New Record\n2. Display All \n3. Search\n4. Delete\n5. Edit\n6. Exit");
while(c!=6)
{  printf("\nEnter Choice ");
   scanf("%d",&c);
    switch(c)
    {  case 1:
  	  	fp=fopen("xyz7.dat","a+");
     printf("Enter Roll ");
     scanf("%d",&S.roll);
      printf("Enter Name ");
      scanf("%s",&S.n);
      printf("Enter Percentage ");
       scanf("%f",&S.per);
      fwrite(&S,sizeof(S),1,fp);
      fclose(fp);
      break;
       break;
 	case 2:
	  fp=fopen("xyz7.dat","r+");
     while(fread(&X,sizeof(X),1,fp))
     {printf("\nRoll = %d   Name = %s Percentage=%0.2f",X.roll,X.n,X.per);   
	 }
    fclose(fp);
        break;	
       case 3:
         printf("Enter Roll to search ");
        scanf("%d",&k);
         f=0;
      fp=fopen("xyz7.dat","r+");
       while(fread(&X,sizeof(X),1,fp))
       {   if(k==X.roll)
           {    printf("\nName = %s Percentage=%0.2f",X.n,X.per);   
	            f=1;
			}
	   }
	   if(f==0)
	   printf("Not Found");
    fclose(fp);
                

        break;	
        case 4:
	    printf("Enter Roll to Delete ");
        scanf("%d",&k);
         f=0;
        fp=fopen("xyz7.dat","r+");
        tp=fopen("temp.dat","a+");
        while(fread(&X,sizeof(X),1,fp))
       {   if(k!=X.roll)
           { 
		     fwrite(&X,sizeof(X),1,tp);
         	}
            else
            { f=1;
			}
	   }
	   if(f==0)
	   printf("Not Found");
       fclose(fp);
       fclose(tp);
       remove("xyz7.dat");
       rename("temp.dat","xyz7.dat");
      
	  
	    break;	
        case 5:
	   printf("Enter Roll to Edit ");
        scanf("%d",&k);
         f=0;
        fp=fopen("xyz7.dat","r+");
        tp=fopen("temp.dat","a+");
        while(fread(&X,sizeof(X),1,fp))
       {   if(k!=X.roll)
           {    fwrite(&X,sizeof(X),1,tp);
         	}
            else
            { f=1;
			   printf("Enter New Roll ");
              scanf("%d",&S.roll);
                printf("Enter New Name ");
                scanf("%s",&S.n);
               printf("Enter New Percentage ");
            scanf("%f",&S.per);
                fwrite(&S,sizeof(S),1,tp);
         	
			}
	   }
	   if(f==0)
	   printf("Not Found");
       fclose(fp);
       fclose(tp);
       remove("xyz7.dat");
       rename("temp.dat","xyz7.dat");
     
	 
	    break;
		case 6:
		break;	
       default: 
	     printf("Invalid Choice");	
    }
}







}
