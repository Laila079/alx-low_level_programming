#include "main.h"
/**
* print_to_98 - function prints all natural numbers from n to 98
* @n: number input
* Return: nothing
*/

void print_to_98(int n)
{
int i;

if (n < 98)
for (i = n; i <= 98; i++)

printf("%d", i);
printf(", ");

else
for (i = n; i > 98; i--)

printf("%d", i);
printf(", ");

printf("98\n");
}
