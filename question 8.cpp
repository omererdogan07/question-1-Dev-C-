#include <stdio.h>
int main ()
{
	int lowNumber, highNumber, sum;
	printf ("enter a lowNumber");
	scanf ("%d" ,&lowNumber);
	printf ("enter a highNumber");
	scanf ("%d", &highNumber);
	while (lowNumber <= highNumber)
	{
		sum = sum + lowNumber;
		lowNumber ++;
	}
	printf ("%d" ,sum);
	return 0;
}
