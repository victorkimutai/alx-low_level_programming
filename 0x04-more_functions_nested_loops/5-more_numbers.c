#include "main.h"
#include <stdio.h>

/**
 * more_numbers -Prints 0 to 14 10 times
 * Return: void (success)
 */

void more_numbers(void)
{
int m, j;

for (m = 1; m <= 10; m++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
putchar('1');
putchar(j % 10 + '0');
}
putchar('\n');
}
}
