#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int p;
int j;
for (p = 0; p < 8; p++)
{
for (j = 0; j < 8; j++)
_putchar(a[p][j]);
_putchar('\n');
}
}
