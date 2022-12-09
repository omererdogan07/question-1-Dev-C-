#include <stdio.h>
int main ()
{
	double Fahrenheit, Celcius, a=5, b=9, c;
	printf("enter a fahrenheit");
	scanf ("%lf" ,&Fahrenheit);
	c=a/b;
	Celcius = c* (Fahrenheit - 32);
	printf("Celcius : %lf",Celcius);
	return 0;
}
