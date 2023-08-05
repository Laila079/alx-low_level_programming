#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: integer, its a counter
 * @argv[]: char, containing values
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
{
	printf("Error\n");
	return (1);
}

printf("%d\n", (_atoi(argv[1]) * _atoi(argv[2])));

return (0);
}
