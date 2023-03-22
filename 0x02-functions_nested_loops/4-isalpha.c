#include "main.h"
/**
* int _isalpha - checks for lowercase or uppercase character
* Return: 1 if c is lowercase or uppercase, and 0 otherwise
*/
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
