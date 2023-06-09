#include <stdio.h>
#include "main.h"


/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string input
 * return: str with uppercase letters
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
