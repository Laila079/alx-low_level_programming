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

printf("%i, ", i);

else
for (i = n; i > 98; i--)

printf("%i, ", i);


printf("98\n");
}
