#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
* struct dog -  definition of a new type.
* @name: name of the dog
* @age: age of the dog
* @owner: the name of the owner of the dog
*/

struct dog
{
char *name;
float *age;
char *owner;
};

typedef struct dog dog_t;

#endif
