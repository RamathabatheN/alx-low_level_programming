#include "main.h"

/**
 * print_binary - prints the binary equivalent to a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int r, count = 0;
unsigned long int cake;
for (r = 63; r >= 0; r--)
{
cake = n >> r;
if (cake & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
