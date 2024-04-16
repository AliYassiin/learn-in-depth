#include "stdio.h"
void main ()
{
float x;
printf ("please enter a number : ");
scanf("%f", &x);
if (x>0)
{
	printf ("the number is positive");
}
else if (x<0)
{
	printf ("the number is negative");
}
else 
	printf ("number is zero");

}