#include <stdio.h>
int main ()
{
	int radius;
	float pi=3.14, area;
	printf ("enter a raidus");
	scanf ("%d", &radius);
	area = pi * radius * radius;
	printf ("area : %f", area);
	return 0;
}
