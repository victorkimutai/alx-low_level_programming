#include "main.h"
#include <stdio.h>

/**
 * puts_half - it print half the string
 * @str: Hold the string
 * Return: void
 */
void puts_half(char *str)
{
int d, b, z;
z = 0;
for (d = 0; str[d] != '\0'; d++)
z++;

b = (z / 2);

if ((z % 2) == 1)
b = ((z + 1) / 2);

for (d = b; str[d] != '\0'; d++)
{
putchar(str[d]);
putchar('\n');
}
}
