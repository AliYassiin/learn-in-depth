#include "stdio.h"
void main ()
{
	char x;
	printf ("enter a charachter: ");
	scanf("%c", &x);
	switch (x)
	{
	case 'a':		case 'A':
	case 'i':		case 'I':
	case 'e':		case 'E':
	case 'o': 	    case 'O':
	printf ("the charachter is vowel");
	break;
	default : printf ("the charachter is consonant"); break;
	}
	
}