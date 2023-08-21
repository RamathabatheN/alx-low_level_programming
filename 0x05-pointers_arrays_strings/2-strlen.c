#include "main.h"
/**
 * _strlen - returns  length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longer = 0;
while (*s != '\0')
{
longer++;
s++;
}
return (longer);
}
