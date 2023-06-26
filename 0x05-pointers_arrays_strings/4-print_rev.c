#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in revers order
  * @s: It carries the string
  * Return: Void
  */

void print_rev(char *s)
{
int m;

int l;

m = 0;
while (*s != '\0')
{
m++;
s++;
}
s--;
for (l = m; l > 0; l--)
{
putchar(*s);
s--;
}
putchar('\n');
}
