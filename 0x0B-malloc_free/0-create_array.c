#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @c: char to assign
 * @size: size of array
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int v;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (v = 0; v < size; v++)
str[v] = c;
return (str);
}
