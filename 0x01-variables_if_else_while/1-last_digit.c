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
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */

LastDigit = n % 10;

if (LastDigit > 5)
	printf("Last digit of %i is %i and is greater than 5", n, LastDigit);
else if (LastDigit == 0)
    printf("Last digit of %i is 0 and is 0", n);
else
printf("Last digit of %i is %i and is less than 6 and not 0", n, LastDigit);
	return (0);
}
