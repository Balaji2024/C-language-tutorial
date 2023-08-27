#include<stdio.h>
void main()
{
	int amt,rs2k,rs500,rs200,rs100,rs50,rs20,rs10;
	printf("Enter amount ");
	scanf("%d",&amt);
	rs2k=amt/2000;
	printf("Rs 2000 = %d\n",rs2k);
	amt=amt%2000;
	rs500=amt/500;
	printf("Rs 500 = %d\n",rs500);
	amt=amt%500;
	rs200=amt/200;
	printf("Rs 200 = %d\n",rs200);
	amt=amt%200;
	rs100=amt/100;
	printf("Rs 100 = %d\n",rs100);
	amt=amt%100;
	rs50=amt/50;
	printf("Rs 50 = %d\n",rs50);
	amt=amt%50;
	rs20=amt/20;
	printf("Rs 20 = %d\n",rs20);
	amt=amt%20;
	rs10=amt/10;
	printf("Rs 10 = %d\n",rs10);
	
}
