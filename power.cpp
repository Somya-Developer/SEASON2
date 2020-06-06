#include "stdio.h"
#include "math.h"
int main ()
{
	double base,power,result;
	printf("ENTER THE BASE NUMBER\n");
	scanf("%lf",&base);
	printf("ENTER THE RAISED NUMBER\n");
	scanf("%lf",&power);
	result=pow(base,power);
	printf("%.1lf^%.1lf IS %.1lf",base,power,result);
	return 0;
}
