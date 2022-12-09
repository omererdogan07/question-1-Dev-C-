#include <stdio.h>
#include <math.h>
int main ()
{
	int number, lastdigit, firstdigit, count = 0, temp, x;
	printf ("enter a number");
	scanf ("%d" ,&number);
	temp = number;
	lastdigit = number %10;
	while (number >= 10)
	{
		number = number / 10;
		firstdigit=number;
		count++;
	}
	x=pow(10,count);
	temp = temp - (firstdigit * x) - lastdigit;
	temp = temp + (lastdigit *x)+ firstdigit;
	printf ("%d" ,temp);
	return 0;
	}
