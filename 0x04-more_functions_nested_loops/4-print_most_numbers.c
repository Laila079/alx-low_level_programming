#include "main.h"

/**
* print_numbers - writes numbers from 0 to 9 without 2 and 4
* Return: nothing
*/

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
_putchar(i + 48);
}
_putchar('\n');
i}
