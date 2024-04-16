#include "stdio.h"
void main ()
{
char x;
printf ("please enter a charachter : ");
scanf("%c",&x);
if (((x>='a')&&(x<='z'))||((x>='A')&&(x<='Z')))
{
	printf ("you entered an alphabet");
}
else printf ("this is not an alphabet");

}