#include <stdio.h>
int main ()
{
	int number, first_digit, last_digit;
	printf ("enter a number");
	scanf ("%d" ,&number);
	last_digit = number % 10;
	while (number >= 10)
	{
		number= number /10;
	}
	printf ("first_digit : %d" ,number);
	printf ("last_digit : %d" ,last_digit);
	return 0;
}
