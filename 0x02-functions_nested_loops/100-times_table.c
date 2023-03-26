#include "main.h"
/**
* int print_to_98 - function prints all natural numbers from n to 98
* @n: number input
* Return: nothing
*/

void print_times_table(int n)

{
int i, j;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; ++i)
{
_putchar(48);
for (j = 1; j <= n; ++j)
{
_putchar(',');
_putchar(' ');
if ((i * j) <= 9)
_putchar(' ');
if ((i * j) <= 99)
_putchar(' ');
if ((i * j) >= 100)
{
_putchar((i * j) / 100 + 48);
_putchar(((i * j) / 10) % 10 + 48);
}
else if ((i * j) <= 99 && (i * j) >= 10)
_putchar(((i * j) / 10) + 48);
_putchar(((i * j) % 10) + 48);
}
_putchar('\n');
}
}
}
