#include "main.h"
#include <stdio.h>

/**
 * puts2 -Prints every chatacter of a string
 * @str: it holds the string
 * Return: void
 */

void puts2(char *str)

{
int a = 0;
int b = 0;
char *c = str;
int d;

while (*c != '\0')
{
c++;
a++;
}
b = a - 1;
for (d = 0; d <= b; d++)
{
if (d % 2 == 0)
{
putchar(str[d]);
}
}
putchar('\n');
}
