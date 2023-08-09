#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* *str_concat - concatenates two strings
* * @s1: 1st string to concatenate
* @s2: 2nd string to concatenate
* Return: the result, concatenation of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{

int i, lenS1, lenS2;
char *concat;

for (; s1[lenS1] != '\0'; lenS1++)
;
for (; s2[lenS2] != '\0'; lenS2++)
;

concat = malloc((lenS1+lenS2) * sizeof(char) + 1);
if (concat == 0)
{
	return (NULL);
}
for (i = 0; i <= lenS1 + lenS2; i++)
{
if (i < lenS1)
	concat[i] = s1[i];
else
	concat[i] = s2[i - lenS1];
}

return (concat);

}

