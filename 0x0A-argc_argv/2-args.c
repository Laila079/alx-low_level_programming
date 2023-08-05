#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives
 * @argc: integer, its a counter
 * @argv[]: char, containing values
 * Return: 0 always (success).
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}

