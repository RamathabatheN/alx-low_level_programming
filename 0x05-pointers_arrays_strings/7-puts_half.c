#include "main.h"
/**
 * puts_half - a function that prints half a string
 * if odd length ,n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half input
 */
void puts_half(char *str)
{
int m, n, longer;
longer = 0;
for (m = 0; str[m] != '\0'; m++)
longer++;
n = (longer / 2);
if ((longer % 2) == 1)
n = ((longer + 1) / 2);
for (m = n; str[m] != '\0'; m++)
_putchar(str[m]);
_putchar('\n');
}
