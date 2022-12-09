#include <stdio.h>
int main ()
{
	int lowNumber, highNumber, stepNumber;
	printf ("enter a lowNumber");
	scanf ("%d" ,&lowNumber);
	printf ("enter a highNumber");
	scanf ("%d" ,&highNumber);
	printf ("enter stepNumber");
	scanf ("%d" ,&stepNumber);
	while (lowNumber < highNumber)
	{
		lowNumber = lowNumber + stepNumber;
		printf ("%d" ,lowNumber);
	}
	return 0;
}
