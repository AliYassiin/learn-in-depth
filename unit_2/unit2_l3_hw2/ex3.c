#include "stdio.h"
void main ()
{
float x,y,z;
printf ("please enter three numbers :\n");
scanf ("%f %f %f", &x,&y,&z);
if (x>y)
{
	if (x>z)
	{
		printf ("the largest is : %f",x);
	}
	else 	printf ("the largest is : %f",z); 
		
}
if (y>x)
{
	if (y>z)
	{
		printf ("the largest is : %f",y);
	}
	else 	printf ("the largest is : %f",z); 
		
}
	
}