#include <stdio.h>
int main ()
{
	int lowNumber, highNumber;
	printf ("enter a lowNumber");
	scanf ("%d" ,&lowNumber);
	printf ("enter a highNumber");
	scanf ("%d" ,&highNumber);
	while (lowNumber <= highNumber)
	{
		printf ("%d" ,lowNumber);
		lowNumber ++;
	}
	return 0;
}
