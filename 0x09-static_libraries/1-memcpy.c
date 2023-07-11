#include "main.h"

/**
 * _memcpy - it copies the n bytes from memory area src
 * @n: function copies
 * @src: the bytes from memory area
 * @dest: to the memory area
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int num = 0;

while (num < n)
{
dest[num] = src[num];
num++;
}
return (dest);
}

