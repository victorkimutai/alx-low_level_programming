#include "main.h"
#include <stdio.h>

/**
 * _strncat - it cincatenate two strings
 * using at most n bytes from src
 * @dest: Input value
 * @src: Input second value
 * @n: Input third value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int l, h;

l = 0;
while (dest[l] != '\0')
{
l++;
}

for (h = 0; h < n && src[h] != '\0'; l++, h++)
{
dest[l] = src[h];
}
dest[l] = '\0';
return (dest);
}
