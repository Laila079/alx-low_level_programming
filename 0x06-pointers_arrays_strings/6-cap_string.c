
#include <stdio.h>
#include "main.h"


/**
 * cap_string - capitalizes all words of a string.
 * @str: string input
 * return: char str changed with uppercase letters
 */

char *cap_string(char *str)
{

int i;

for (i = 0; str[i] != '\0'; i++)
{

if (str[i - 1] == ' ' || str[i - 1] == ',' || str[i - 1] == ';' ||
		str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
		str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
		str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '\t' ||
		str[i - 1] == '\n' || i == 0)
{

if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;

}
}
return (str);
}


