#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i, lastDigit, freq [i], n, number;
	for (i=0; i<10; i++)
	{
		freq [i] = 0;
	}
	n = number;
	while (n != 0)
	{
		lastDigit = n % 10;
		n /= 10;
		freq [lastDigit]++;
	}
	printf ("frequency of each digit in %11d is : \n" ,number);
	for (i=0; i<10; i++)
	{
		printf ("frequency of %d = %\n", i, freq [i]);
	}
	return 0;
}

