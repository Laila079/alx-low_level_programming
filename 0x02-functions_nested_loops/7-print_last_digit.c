#include "main.h"
/**
* main - print last digit
* @n: number given
* Return: result - last digit
*/

int print_last_digit(int n)
{
int i;
if (i < 0)
i = -1 * (n % 10);
else
i = n % 10;
_putchar(i + '0');
return (i);
}
