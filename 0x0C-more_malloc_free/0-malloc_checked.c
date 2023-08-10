
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* *malloc_checked - allocates memory using malloc
* @b: size of the array to allocate
* Return: Returns a pointer to the allocated memory, 98 if it fails
*/

void *malloc_checked(unsigned int b)
{

int *p = malloc(b);
int i;

if (*p != 0)
	free(p);
else
	exit(98);

return (p);
}
