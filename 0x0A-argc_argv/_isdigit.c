#include "main.h"

/**
 * _isdigit - a program that checks if the parameter is digit
 * @c: character to check
 * Return: 1 if success and 0 if not.
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
