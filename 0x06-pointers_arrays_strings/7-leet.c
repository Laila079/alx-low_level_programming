#include <stdio.h>
#include "main.h"


/**
 * leet - encodes a string into 1337
 * @str: string input
 * return: str changed with 1337.
 */

char *leet(char *str)
{

char *copystr = str;
char letters[] = {'A', 'E', 'O', 'T', 'L'};
int numbers[] = {4, 3, 0, 7, 1};
unsigned int i;

while (*str)
{
for (i = 0; i < sizeof(letters) / sizeof(char); i++)
{
if (*str == letters[i] || *str == letters[i] + 32)
{
*str = 48 + numbers[i];
}
}
str++;
}

return (copystr);
}
