#include "main.h"
/**
* jack_bauer - print every minute of the day of Jack Bauer
* Return: result - last digit
*/
void jack_bauer(void)
{
int h, min;
for (h = 0; h <= 23; h++)
{
for (min = 0; min <= 59; min++)
{
putchar((h / 10) + 48);
putchar((h % 10) + 48);
putchar(':');
putchar((min / 10) + 48);
putchar((min % 10) + 48);
putchar('\n');
}
}
}
