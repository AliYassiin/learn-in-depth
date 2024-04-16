#include <stdio.h>
void main (void)
{
	float x, y;
	printf ("please enter value of a : ");
	scanf("%f", &x);
	printf ("please enter value of b : ");
	scanf("%f", &y);
	x= x+y;
	y= x-y;
	x= x-y;
	printf ("the new value of a is : %0.2f \n",x);
	printf ("the new value of b is : %0.2f",y);

	
	
		
	
}