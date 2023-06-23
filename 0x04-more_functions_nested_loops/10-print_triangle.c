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
for (space = size - row; spaces >= 1; space--)
{
putchar(' ');
}
for (h = 1; h <= row; h++)
{
putchar('#');
}
putchar('\n');
}
}
}
