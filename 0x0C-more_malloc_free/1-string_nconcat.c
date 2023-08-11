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
int i, j, size;

for (i = 0; i <= n; i++)
{
if (s2[i] != '\0')
size++;
}

p = malloc((sizeof(s1) * char)+size);

for (i = 0; i != '\0'; i++)

	p[i] = s1;

for (j = 1; j < n; j++)

	p[i + j] = s2;


return (*p);

}
