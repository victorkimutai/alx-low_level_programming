#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name that holds a the element
 * @n: is the element of array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int l;


for (l = 0; l < (n - 1); l++)

{
printf("%d, ", a[l]);
}

if (l == (n - 1))

{
printf("%d", a[n - 1]);
}

printf("\n");
}

