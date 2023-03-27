#include "main.h"

/**
* print_line - straight line
* @n: input number
* Return: nothing
*/

void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
if (n > 0)
_putchar('_');
}
_putchar('\n');
}
