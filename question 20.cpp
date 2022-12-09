#include <stdio.h>
int main ()
{
	int number, digit = 1;
	printf ("enter a number");
	scanf ("%d" ,&number);
	while ( number >10)
	{
		number = number /10;
		digit++;
	
	}
	printf (" digit number : %d" , digit);
	return 0;
}
