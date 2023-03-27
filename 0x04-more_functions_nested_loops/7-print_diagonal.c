#include "main.h"

/**
* print_diagonal - diagonal line
* @n: input number
* Return: nothing
*/

void print_diagonal(int n)
{
int i;
for (i = 1; i <= n; i++)
{
if (n > 0)
_putchar(92);
}
_putchar('\n');
}
