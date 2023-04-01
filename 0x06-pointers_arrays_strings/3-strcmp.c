#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares 2 strings
 * @s1: first string to compare
 * @s2: 2nd string given
 * return: if the strings are equal, the function returns 0.
 */


int _strcmp(char *s1, char *s2)
{
int result = 0;

while (*s1)
{

if (*s1 != *s2)
{
result = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (result);
}
