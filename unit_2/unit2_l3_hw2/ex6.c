#include "stdio.h"
void main ()
{
int n;
int sum=0;
printf ("please eneter an integer: ");
scanf("%d",&n);
for (int i=1; i<=n ; i++)
{
	sum +=i;
}
printf ("sum = %d ", sum);

}