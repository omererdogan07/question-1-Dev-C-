#include <stdio.h>
int main ()
{ 
int freezingPoint, temperature;
printf ("enter a temperature");
scanf ("%d" ,&temperature);
if (temperature > 0)
printf ("temperature is above the freezingPoint");
else
printf ("temperature is below the freezingPoint");
return 0;
}
