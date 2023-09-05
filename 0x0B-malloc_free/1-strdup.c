#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate on a new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *aah;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
aah = malloc(sizeof(char) * (i + 1));
if (aah == NULL)
return (NULL);
for (r = 0; str[r]; r++)
aah[r] = str[r];
return (aah);
}
