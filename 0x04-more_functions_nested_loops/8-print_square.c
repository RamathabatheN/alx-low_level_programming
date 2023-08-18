#include "main.h"
/**
 * print_square - prints a square on a new line
 * @size: size of the square to be printed
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, d;
for (i = 0; i < size; i++)
{
for (d = 0; d < size; d++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
