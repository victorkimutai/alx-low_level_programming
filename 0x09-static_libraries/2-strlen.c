#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: Holds the string
 * Return: Always 0
 */

int _strlen(char *s)
{
int m = 0;
while (*s != '\0')
{
m++;
s++;
}
return (m);
}
