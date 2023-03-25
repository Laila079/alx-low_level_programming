#include <stdio.h>
/**
* main - alphabet exept q and e
* Return: 0
*/

int main(void)
{
int ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++ ; }
putchar ('\n');
return (0);
}
