#include <stdlib.h>
#include <stdio.h>
#includ "dog.h"

/**
* print_dog - prints a struct dog
* @d: struct dog;
* @Return: 0;
*/

void print_dog(struct dog *d)
{

if (d == NULL)
exit();

if (d.name == NULL)
	d.name == "nil";
if (d.age == NULL)
	(char) d.age == "nil";
if (d.owner == NULL)
	d.owner == "nil";

printf("Name : %s\n", d.name);
printf("Age : %.1f\n", d.age);
printf("Owner : %s\n", d.owner);

}
