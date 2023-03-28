#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse gear
 * @s: char input
 * Return: 0
*/

void rev_string(char *s)
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
