#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_rev - reverse gear
 * @s: char input
 * Return: 0
*/

void print_rev(char *s)


{
int i = 0;
while (s[i])
i++;
while (i--)
{
putchar (s[i]);
}
putchar('\n');
}
