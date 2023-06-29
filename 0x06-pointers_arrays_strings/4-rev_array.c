#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: array itself
 * @n: number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int o, g;

for (o = 0, o < n--; o++)
{
g = a[o];
a[o] = a[n];
a[n] = g;
}
}

