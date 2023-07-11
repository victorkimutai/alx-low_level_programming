#include "main.h"
#include <stdio.h>

/**
 * _strncpy - It copys a string to another string
 * @dest: It stores the first string
 * @src: It stores the second string
 * @n: it gives the amout of bytes to copy
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
int p;

p = 0;
while (p < n && src[p] != '\0')
{
dest[p] = src[p];
p++;
}

while (p < n)
{
dest[p] = '\0';
p++;
}
return (dest);
}
