#include "main.h"
/**
 * _abs - calculates the absolute value of an integer
 * @ab: integer 
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

