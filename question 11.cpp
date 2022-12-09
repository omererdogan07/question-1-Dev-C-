#include <stdio.h>
int main ()
{
	int number, count = 1, sum = 0;
	printf ( "enter a number");
	scanf ("%d" ,&number);
	while (count <= 10)
	{
		printf ("%d" ,number);
		sum = sum+ number;
		count ++;
		printf ("enter a number");
		scanf ("%d" ,&number);
	}
	printf ("sum : %d" ,sum);
	return 0;
}
