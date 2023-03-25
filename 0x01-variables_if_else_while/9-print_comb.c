#include <stdio.h>
/**
* main - print single digit numbers
* @num - character printed
* Return: 0
*/

int main(void)
{
int num = 48;
while (num < 58)
{
putchar(num);
if (num != 57)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar ('\n');
return (0);
}
