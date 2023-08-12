#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* *_calloc -  allocates memory for an array of nmemb elements of size bytes
* @nmemb: elements input
* @size: size of elements
* Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

if (nmemb == 0 || size == 0)

return (NULL);

unsigned int i;
int *p = malloc(sizeof(char) * size);

for (i = 0; i <= nmemb; i++)
	p[i] = 0;


return (p);

}
