#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the length of the string
 * @s: The string to be measured
 * Return: void
 */

int _strlen_recursion(char *s)
{
int m;

if (*s)
{
m++;
m += _strlen_recursion(s + 1);
}
return(m);
}
