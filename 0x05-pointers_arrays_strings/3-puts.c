#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - strlen of pointer (str)
 * @str: char pointer
 * Return: 0
*/

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str + 0);
str++;
}
putchar ('\n');
}
