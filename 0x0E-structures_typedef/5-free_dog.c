#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* free_dog - frees dogs
* @d: dog to free;
* Return: NULL;
*/

void free_dog(dog_t *d)
{

if (d != NULL)

{
		free(d->name);
		free(d->owner);
		free(d);
}

}
