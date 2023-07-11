#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that print a string
 * @str: Holds the string
 * Return: void
 */

void _puts(char *str)

{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
