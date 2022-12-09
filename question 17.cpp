#include <stdio.h>
int main ()
{
	double number, count =2, S;
	printf ("enter a number");
	scanf ("%lf" ,&number);
	while ( count <= number)
	{
		S+= 1/count;
		count = count +2;
	}
	printf ("S : %lf" ,S);
	return 0;
}
