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

int i, j;

char *concat = malloc(sizeof(s1) + sizeof(s2));

for (i = 0 ; i < sizeof(s1) ; i++)
{
concat[i] = *s1;
}

for (j = i + 1 ; j < sizeof(s2) ; j++)
{
concat[j] = *s2;
}

}
