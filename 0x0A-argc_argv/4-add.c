#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks string that are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
unsigned int counting;
counting = 0;
while (counting < strlen(str))
{
if (!isdigit(str[counting]))
{
return (0);
}
counting++;
}
return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int counting;
int str_to_int;
int sum = 0;
counting = 1;
while (counting < argc)
{
if (check_num(argv[counting]))
{
str_to_int = atoi(argv[counting]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
counting++;
}
printf("%d\n", sum);
return (0);
}
