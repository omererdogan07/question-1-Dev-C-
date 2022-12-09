#include <stdio.h>
int main ()
{
	int number, count=0, multiplication;
	printf ("enter a number");
	scanf ("%d" ,&number);
	while (count <=10)
	{
		multiplication = number * count;
		printf ("%d" ,multiplication);
		count ++;
	}
	return 0;
}
