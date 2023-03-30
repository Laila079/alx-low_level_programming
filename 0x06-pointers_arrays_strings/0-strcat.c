#include <stdio.h>
#include "main.h"


/**
 * _strcat - concatenate é strings
 * @dest: char destination
 * @src: char source
 * Return: char result of 2 strings.
 */
char *_strcat(char *dest, char *src)
{
int count, i;
count = 0;
while (dest[count])
count++;
for (i = 0; src[i]; i++)
dest[count++] = src[i];
return (dest);
}
