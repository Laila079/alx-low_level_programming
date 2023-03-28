#include "main.h"
#include <stdio.h>
/**
 * puts2 - input even numbers
 * @str: char input
 * Return: 0
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; ++i)
{
if (i % 2 == 0)
printf("%c", str[i]);
}
printf("\n");
}
