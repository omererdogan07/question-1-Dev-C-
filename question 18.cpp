#include <stdio.h>
#include <math.h>
int main ()
{
	int number, count = 0, sum = 0;
	printf ("enter a number");
	scanf ("%d" ,&number);
	while (number >= 2)
	{
		sum += (number %2) * pow (10,count);
		number = number/2;
		count ++;
	}
	sum += number * pow(10, count);
	printf ( "sum %d" ,sum);
	return 0;
}
