#include <stdlib.h>
#include <stdio.h>
#includ "dog.h"

/**
* dog_t *new_dog - creates a new dog.
* @name: dog's name;
* @age : dog's age;
* @owner : dog's owner;
* Return: NULL if the function fails, else it creates a new dog;
*/

dog_t *new_dog(char *name, float age, char *owner)
{

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
	return (NULL);
else
	new_dog.name->name;
	new_dog.age->age;
	new_dog.owner->owner;

	return (new_dog);
}
