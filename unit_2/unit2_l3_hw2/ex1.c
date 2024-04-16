#include "stdio.h"
void main ()
{
	int x;
	printf ("enter an integer you want to check: ");
	scanf("%d", &x);
	if (x%2 == 0)
	{
		printf ("the integer is even");
	}
	else 
	{printf ("the integer is odd");}
}