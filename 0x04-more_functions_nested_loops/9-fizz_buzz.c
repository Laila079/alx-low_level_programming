#include "main.h"
/**
 * main - FizzBuzz
 *
 * Return: Always 0.
*/
int main(void)
{
int i, n;
for (i = 0; i < 100; i++)
{
if (n % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else if (n % 5 == 0)
{
printf("Buzz");
printf(" ");
}
else if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%i", i);
printf(" ");
}
}
}
