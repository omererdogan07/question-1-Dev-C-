#include <stdio.h>
int main ()
{
	int number = 6, count = 0, multiplication;
	while (count <= 10)
	{
		multiplication = number * count;
		printf ("%d"  ,multiplication);
		count ++;
	}
	return 0;
}
