#include <stdio.h>
#include "main.h"
/**
 *factorial - returns the factorial of a given number.
 *@n: input integer
 *Return : -1 if n <0, and the factoriel of n otherwise
*/


int factorial(int n)
{
if (n < 0)
return (-1);

else if (n == 0)
return (1);

else
return (n * factorial(n - 1));
}
