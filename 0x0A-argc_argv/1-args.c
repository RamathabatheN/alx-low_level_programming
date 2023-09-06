#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments passed from the program
 * @argv: array of argument
 * @argc: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
