#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - the last digit
* Return- 0
*/

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */

LastDigit = n % 10;

if (i > 5)
printf("Last digit of %d is %d and is greater than 5 ", n, i);
else if (i == 0)
printf("Last digit of %d is 0 and is 0 ", n);
else
printf("Last digit of %d is %d and is less than 6 and not 0 ", n, i);
	return (0);
}
