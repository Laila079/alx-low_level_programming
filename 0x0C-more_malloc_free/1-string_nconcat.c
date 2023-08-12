#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* *string_nconcat - allocates memory for an array of elements of size bytes
* @s1: 1st string given
* @s2: 2nd string given
* @n: elements to take from s2
* Return: pointer to a newly allocated space, contains s1, then n bytes of s2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char p;
unsigned int i, j, size1, size2;

for (i = 0; s1; i++)
{
	if (s1[i] != '\0')
		size1++;
}

for (j = 0; j < n; j++)
{
	if (s2[j] != '\0')
		size2++;
}


p = malloc((sizeof(char) * (size1 + size2 + 1));

if (!p)
return (NULL);

for (i = 0; i != '\0'; i++)
p[i] = s1;


for (j = i; j <= n; j++)

p[j] = s2;

return (p);
}
