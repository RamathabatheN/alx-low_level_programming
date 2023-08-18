#include "main.h"
/**
 * print_triangle - prints a triangle on a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int o, j;
for (o = 1; o <= size; o++)
{
for (j = o; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= o; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
