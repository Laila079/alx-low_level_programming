#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: integer, its a counter
 * @argv[]: char, containing values
 * Return: 0 always.
*/

int main(int argc, char *argv[])
{
	printf("mynameis %s\n", argv[0]);
	return (0);
}
