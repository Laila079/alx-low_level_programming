#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - a program that returns the length of a string.
 * @s: a string as parameter
 * Return: length of s
 */

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}

s++;
return (_strlen_recursion(s) + 1);

}
