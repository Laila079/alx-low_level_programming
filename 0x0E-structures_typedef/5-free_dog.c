#include <stdlib.h>
#include <stdio.h>
#includ "dog.h"

/**
* free_dog - frees dogs
* @d: dog to free;
* Return: NULL;
*/

void free_dog(dog_t *d)
{

if (d != NULL)
free(d);

}
