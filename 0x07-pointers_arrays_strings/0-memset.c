#include "main.h"
/**
 * _memset - fill block of memory with the specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int v = 0;
for (; n > 0; v++)
{
s[v] = b;
n--;
}
return (s);
}
