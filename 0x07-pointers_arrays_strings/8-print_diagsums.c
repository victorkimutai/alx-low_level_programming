#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagnal
 * @a: The matrix of integer
 * @size: Te size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int num;
int k = 0;
int l = 0;

for (num = 0; num < size; num++)
{
k += a[num];
a += size;
}
a -= size;

for (num = 0; num < size; num++)
{
l += a[num];
a -= size;
}
printf("%d, %d\n", k, l);
}
