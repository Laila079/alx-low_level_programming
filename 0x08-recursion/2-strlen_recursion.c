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

int count;
count = 0;

if (*s == '\0')
{
return (count);
}

count++;
_strlen_recursion(s);
count += 1;

printf ("%d\n", count);

}

