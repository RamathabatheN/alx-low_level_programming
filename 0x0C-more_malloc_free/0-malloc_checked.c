#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates a memory using malloc
 * @b: number of the  bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *lethabo;
lethabo = malloc(b);
if (lethabo == NULL)
exit(98);
return (lethabo);
}
