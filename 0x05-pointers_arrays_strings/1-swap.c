#include "main.h"
/**
 * swap_int - swaps two intergers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
