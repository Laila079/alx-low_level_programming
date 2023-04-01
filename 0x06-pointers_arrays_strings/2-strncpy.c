#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * return: pointer with result after copy
 */


char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}

