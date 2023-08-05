#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: integer, its a counter
 * @argv[]: char, containing values
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
int i, j;

if (argc < 3 || argc > 3)
{
	printf("Error\n");
	return (1);
}

	i = _atoi(argv[1]);
	j = _atoi(argv[1]);

	printf("%d\n", i * j);
	return (0);
}
