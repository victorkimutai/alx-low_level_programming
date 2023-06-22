#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -Prints numbers from 0 to 9
 * Return: void (success)
 */

void print_most_numbers(void)

{
char k;

for (k = '0'; k <= '9'; k++)
if (k != '2' && k != '4')
putchar(k);
putchar('\n');
}

