#include "stdio.h"
void main ()
{
float x,y;
char operator;
printf ("enter operator either + or - or * or / ");
scanf("%c", &operator);
printf ("enter two numbers: \n");
scanf("%f %f",&x,&y);
switch (operator)
	{
		case '+':  
		printf ("%f + %f = %0.2f", x,y,x+y);		break;
		case '-':
		printf ("%f - %f = % 0.2f",x,y,x-y);		break;
		case '*':
		printf ("%f * %f = %0.2f", x,y,x*y);		break;
		case '/':
		if (y==0)
		{printf ("error !");}
		else 
		{printf ("%f / %f = %0.2f",x,y,x/y);}
		break;
		default : 
		printf ("wrong operator !");
		
	}

}