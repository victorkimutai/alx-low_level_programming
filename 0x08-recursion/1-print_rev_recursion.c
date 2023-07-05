#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - it display a string in revers
 * @s: it is the string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
