#include "main.h"

/**
 * _sqrt_recursion -returns the natural square root of a number
 * @n : integer, parameter
 * Return: square root, or -1 (failed)
*/

int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);

return (n * _sqrt_recursion(n));

}
