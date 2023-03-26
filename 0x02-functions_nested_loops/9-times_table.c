#include "main.h"
/**
* times_table - print 9 times table
* Return: result - last digit
*/

void times_table(void)
{
int i, j;
for (i = 1; i < 10; i++)
{
_putchar('0');
for (j = 1; j < 10; j++)
{
_putchar(',');
_putchar(' ');
if (i * j <= 9)
_putchar(' ');
else
_putchar((i * j) / 10 + 48);
_putchar((i * j) % 10 + 48);
}
_putchar('\n');
}
}
