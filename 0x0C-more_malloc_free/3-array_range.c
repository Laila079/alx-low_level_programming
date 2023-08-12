#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* *array_range -  sorts all the values from min (included) to max (included)
* @min: min input
* @max: max input
* Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{

if (min > max)
return (NULL);

int *p = malloc(sizeof(int) * ((max - min) + 1));
int i;

if (!p)
return (NULL);

for (i = 0; i <= max; i++)

p[i] = min + i;

return (p);

}

