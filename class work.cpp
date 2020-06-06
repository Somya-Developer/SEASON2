#include <stdio.h>
#include <math.h>
int main()
{
	int n,a;
	float num, numa;
	printf("\t\t\t\t JAI SHREE RAM\n")
	;printf (" PRESS 1 FOR SQUARE ROOT\n PRESS 2 FOR CUBE ROOT\n PRESS 3 FOR POWER PROGRAM\n");
	scanf("%d",&a);
	switch(a)
{	
	case 1:
		printf ("WELCOME TO SQUARE ROOT PROGRAM\n");
		printf("ENTER THE NUMBER TO GET ITS SQUARE ROOT\n");
	scanf("%f",&num);
	printf ("THE SQUARE ROOT OF %.2f IS %.2f",num,sqrt(num));
	break;
	case 2:
		printf("WELCOME TO CUBE ROOT PROGRAM\n");
		printf("ENTER THE NUMBER TO GET ITS CUBE ROOT\n");
	scanf("%f",&numa);
	printf ("THE CUBE ROOT OF %.2f IS %.2f",numa,cbrt(numa));
	break;
	case 3:
	double base,power,result;
	printf("WELCOME TO POWER PROGRAM\n");
	printf("ENTER THE BASE NUMBER\n");
	scanf("%lf",&base);
	printf("ENTER THE RAISED NUMBER\n");
	scanf("%lf",&power);
	result=pow(base,power);
	printf("%.1lf^%.1lf IS %.1lf\n",base,power,result);
	break;
	default:
		printf("WRONG INPUT..........");
	break;	
}
	printf (" THANK YOU FOR USING OUR SOFTWARE\n MADE BY SOMYA CHAUHAN");
}
	

