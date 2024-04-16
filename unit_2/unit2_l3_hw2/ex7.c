#include "stdio.h"
void main ()
{
	int n,i;
	int factorial=1;
	printf ("please enter an integer: ");
	fflush(stdout);
	scanf("%d",&n);
	if (n>0)
	{
		for ( i=1; i<= n ; i++)
						{
							factorial *= i;
						}
				printf ("factorial = %d", factorial);
	}
	else if (n=0)
	{
		printf ("factorial = %d", factorial);
	}
	else

		{
			printf ("error");
		}

}