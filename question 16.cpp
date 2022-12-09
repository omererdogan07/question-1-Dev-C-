#include <stdio.h>
int main ()
{
	int number =1000, sum =0;
	while (number <= 2000)
	{
		sum = sum + number;
		printf ("%d" ,number);
		number = number +2;
	}
	printf ("sum : %d" ,sum);
	return 0;
}
