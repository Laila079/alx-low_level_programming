#include <stdio.h>
/**
* main - print numbers of base 16
* @num: character printed
* Return: 0
*/

int main(void)
{
int num = 48;
while (num <= 102)
{
putchar(num);
if (num == 57)
num += 39;
num++ ; }
putchar ('\n');
return (0);
}
