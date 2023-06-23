#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Forms a triangle with use of #
 * @size: Gives the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int r, h, s;

if (size <= 0)
{
putchar('\n');
}
else
{
for (r = 1; r <= size; r++)
{
for (s = size - r; s >= 1; s--)
{
putchar(' ');
}
for (h = 1; h <= r; h++)
{
putchar('#');
}
putchar('\n');
}
}
}
