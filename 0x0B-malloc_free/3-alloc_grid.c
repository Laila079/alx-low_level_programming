#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width integer
* @height: height integer
* Return: a pointer to a 2 dimensional array if not one of parameters is null.
*/

int **alloc_grid(int width, int height)
{

int i, j;

int **dim;

if (width <= 0 || height <= 0)
	return (NULL);

dim = malloc(sizeof(int) * height);

if (dim == NULL)
{
	free(dim);
	return (NULL);
}

for (i = 0; i < height; i++)
{
	dim[i] = malloc(sizeof(int) * width);
if (dim[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(dim[j]);
}
free(dim);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
dim[i][j] = 0;
}
}
return (dim);

}
