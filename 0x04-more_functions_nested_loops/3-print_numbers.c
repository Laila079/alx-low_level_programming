#include "main.h"

/**
* print_numbers - writes numbers from 0 to 9
* Return: nothing
*/

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + 48);
}
_putchar('\n');
}
