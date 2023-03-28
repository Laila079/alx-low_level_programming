#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap 2 integers
 * @a: 1st pointer input
 * @b: 2nd pointer input
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
