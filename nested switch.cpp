#include  <stdio.h>
#include <string.h>
int main ()
{
	int a,z;
	char word[50];
	printf (" PRESS 1 FOR STRING.H ZONE\n PRESS 2 FOR ARITHMATIC ZONE\n");
	scanf("%d",&z);
	switch(z)
	{
	case 1:
	printf ("ENTER THE WORD\n");
	scanf("%s",&word);
	printf("PRESS 1 TO SEE THE WORD IN UPPERCASE\nPRESS 2 TO SEE THE WORD IN LOWERCASE\nPRESS 3 TO GET LENGTH OF WORD\nPRESS 4 TO GET THE WORD REVERSED\n ");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("THE UPPPERCASE OF WORD IS %s\n",strupr(word));
	break;
	case 2:
		printf ("THE LOWERCASE OF WORD IS %s\n",strlwr(word));
	break;
	case 3:
		printf ("THE OF WORD IS %d\n",strlen(word));
	break;
	case 4:
		printf("THE REVERSED FORM OF WORD IS %s",strrev(word));
	break;							 
	}
	break;
	case 2:
		int az,num1,num2;
		printf("ENTER THE NUMBER\n");
		scanf("%d %d",&num1,&num2);
		printf(" PRESS 1 FOR ADDITION\n PRESS 2 FOR SUBTRACTION\n PRESS 3 FOR MULTIPLICATION\n PRESS 4 FOR DIVISION\n");
		scanf("%d",&az);
		switch(az)
		{
			case 1:
				printf("THE SUM OF %d %d IS %d\n",num1,num2,num1+num2);
			break;
			case 2:
				printf("THE SUBTRACTION OF %d %d IS %d\n",num1,num2,num1-num2);
			break;
			case 3:
				printf("THE PRODUCT OF %d %d IS %d\n",num1,num2,num1*num2);
			break;
			case 4:
				printf("THE QUOTIENT OF %d %d IS %d\n",num1,num2,num1/num2); 
			break;
			default:
			printf("WRONG INPUT.........\n");
			break;
		}
}
	
}
