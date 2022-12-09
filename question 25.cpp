#include <stdio.h>
int main ()
{
	int first_number, second_number, result;
	
	printf ("enter a first_number");
	scanf ("%d" ,&first_number);
	
	printf ("enter a second_number");
	scanf ("%d" ,&second_number);
	
	while (first_number!=second_number)
	{
		if(first_number > second_number)
		{
			first_number=first_number-second_number;
			result=first_number;
		}
		else
		{
			second_number=second_number-first_number;
			result=second_number;
		}
	}
	printf ("HCF= %d" ,result);
	return 0;
}
