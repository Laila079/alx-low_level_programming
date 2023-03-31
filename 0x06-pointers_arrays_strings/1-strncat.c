#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate é strings
 * @dest: char destination
 * @src: char source
 * @n : number input where to start concat
 * Return: char result of 2 strings.
 */
char *_strncat(char *dest, char *src, int n)
{
int count, i;
count = 0;
while (dest[count])
count++;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[count + i] = src[i];
dest[count + i] = '\0';
return (dest);
}
