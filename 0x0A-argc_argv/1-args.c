#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: integer, its a counter
 * @argv[]: char, containing values
 * Return: 0 always.
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	(void)*argv;
return (0);
}
