#include <stdio.h>
#include<math.h>
int main()
{
	float num;
	printf("ENTER THE NUMBER TO GET ITS CUBE ROOT\n");
	scanf("%f",&num);
	printf ("THE CUBE ROOT OF %.2f IS %.2f",num,cbrt(num));
}

