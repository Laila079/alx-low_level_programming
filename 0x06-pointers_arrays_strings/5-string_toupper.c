#include <stdio.h>
#include "main.h"


/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string input
 * return: string with uppercase letters
 */

char *string_toupper(char *str)
{

int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
return (str);
}
}
