#include "main.h"
/**
 * more_numbers - print  numbers
 */
void more_numbers(void)
{
int i, l;
for (i = 1; i <= 10; i++)
{
for (l = 0; l <= 14; l++)
{
if (l >= 10)
_putchar('1');
_putchar (l % 10 + '0');
}
_putchar('\n');
}
}
