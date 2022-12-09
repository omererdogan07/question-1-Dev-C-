#include <stdio.h>
#include <math.h>
int main ()
{
	int number, lastdigit, newnumber = 0, temp;
	printf ("enter a number");
	scanf ("%d" ,&number);
	temp = number;
	while (number >0)
	{
		lastdigit = number %10;
		newnumber = (newnumber * 10 ) + lastdigit;
		number = number /10;
	}
	if ( temp == newnumber)
	printf ("palindrom number");
	return 0;
}
