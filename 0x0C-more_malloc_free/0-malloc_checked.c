
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

unsigned int *p = malloc(b);

if (p == NULL)
	exit(98);

return (p);
}
