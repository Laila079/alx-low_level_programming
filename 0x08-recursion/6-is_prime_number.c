#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - returns 1 if prime number, if not 0
 * @n : integer
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{

result = 0;
i = n - 1;

if (n <= 1)
return (0);

if (i > 1)
result = n % i;

if (result == 0)
{
result++;
}
i--;

}
