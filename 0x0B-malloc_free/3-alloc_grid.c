#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returnd pointer to 2D
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
int **mine;
int a, b;
if (width <= 0 || height <= 0)
return (NULL);
mine = malloc(sizeof(int *) * height);
if (mine == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
mine[a] = malloc(sizeof(int) * width);
if (mine[a] == NULL)
{
for (; a >= 0; a--)
free(mine[a]);
free(mine);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
mine[a][b] = 0;
}
return (mine);
}
