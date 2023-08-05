#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int _atoi(char *str)
{
int neg;
int num;
int i;

i = 0;
neg = 1;
num = 0;
while (str[i] <= ' ')
i++;
if (str[i] == '-' || str[i] == '+')
{
if (str[i] == '-')
{
neg *= -1;
}
i++;
}
while (str[i] >= '0' && str[i] <= '9')
{
num = num * 10 + (str[i] - 48);
i++;
}
return (num * neg);
}

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

int i;
int j;

i = _atoi(argv[1]);
j = _atoi(argv[1]);

	printf("%d\n", i * j);
	return (0);
}
