#include "main.h"
/**
 * rev_string - Reverseing a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
char revers = s[0];
int count = 0;
int l;
while (s[count] != '\0')
count++;
for (l = 0; l < count; l++)
{
count--;
revers = s[l];
s[l] = s[count];
s[count] = revers;
}
}
