#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - it makes a grid
 * @width: width of the input
 * @height: height of the input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{
int **m;
int e, y;

if (width <= 0 || height <= 0)
return (NULL);
m = malloc(sizeof(int *) * height);
if (m == NULL)
return (NULL);
for (e = 0; e < height; e++)
{
m[e] = malloc(sizeof(int) * width);
if (m[e] == NULL)
{
for (; e >= 0; e--)
free(m[e]);
free(m);
return (NULL);
}
}
for (e = 0; e < height; e++)
{
for (y = 0; y < width; y++)
m[e][y] = 0;
}
return (m);
}
