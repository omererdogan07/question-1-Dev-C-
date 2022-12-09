#include <stdio.h>
int main ()
{
	int fact = 1, number, count = 1;
	printf ("enter a number");
	scanf ("%d" ,&number);
	while (count <= number)
	{
		fact = fact * count;
		count ++;
	}
	printf ("fact : %d" ,fact);
	return 0;
}
