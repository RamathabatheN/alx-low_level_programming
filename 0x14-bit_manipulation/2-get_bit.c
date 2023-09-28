#include "main.h"

/**
 * get_bit - returns value of a bit on an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int num_bit;
if (index > 63)
return (-1);
num_bit = (n >> index) & 1;
return (num_bit);
}
