#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int a, b, n, length, f, dig;
a = 0;
b = 0;
n = 0;
length = 0;
f = 0;
dig = 0;
while (s[length] != '\0')
length++;
while (a < length && f == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
dig = s[a] - '0';
if (b % 2)
dig = -dig;
n = n * 10 + dig;
f = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
f = 0;
}
a++;
}
if (f == 0)
return (0);
return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;
printf("%d\n" ,result);
return (0);
}
