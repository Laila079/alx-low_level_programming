#include <stdlib.h>
#include <stdio.h>
#include "mail.h"


/**
 * main - a program that adds positive numbers.
 * @argc: integer, its a counter
 * @argv[]: char, containing values
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
int i, result;

if (argc < 0)
printf("0");

for (i = 0 ; i < argc ; i++)
{
if (_isdigit(argv[i]) == 0)
{
printf("Error\n");
return (1);
}
else
{
result = result + _atoi(argv[i]);
}
}

printf("%d\n", result);
return (0);

}
