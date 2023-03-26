#include "main.h"
/**
* print_to_98 - function prints all natural numbers from n to 98
* @n: number input
* Return: result of addition of 2numbers
*/

void print_to_98(int n)
{
int i;

if (n < 98)
{

for (i = n; i <= 98; i++)
{
printf("%i", i);
if (i != 98)
printf(", ");
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%i", i);
if (i != 98)
printf(", ");
}
}
printf("\n");
}
