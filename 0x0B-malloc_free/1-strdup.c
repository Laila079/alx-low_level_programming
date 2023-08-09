#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* *_strdup - returns a pointer that contains a copy of the string given
* @str: string given as a parameter
* Return: pointer to a newly allocated space if str isn't NULL
*/

char *_strdup(char *str)
{

char *m;
int i = 0, size = 0;

if (str == NUL)
	return (NUL);

While(str[size] != '\0'; size++)

m = malloc(size * sizeof(*str) + 1);

if (m == 0)
return (NULL);
else
{
	for (; i < size; i++)
	m[i] = str[i];
}
return (m);
free(m);
}

