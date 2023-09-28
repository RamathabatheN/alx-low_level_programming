#include "main.h"

/**
 * binary_to_uint - converts binary numbers to an unsigned int
 * @b: string that has a binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int hive = 0;
int h;
if (!b)
return (0);
for (h = 0; b[h]; h++)
{
if (b[h] < '0' || b[h] > '1')
return (0);
hive = 2 * hive + (b[h] - '0');
}
return (hive);
}
