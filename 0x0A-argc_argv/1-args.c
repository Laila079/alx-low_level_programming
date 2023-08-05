#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: integer, its a counter
 * @argv[]: char, containing values
 * Return: 0 always.
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
