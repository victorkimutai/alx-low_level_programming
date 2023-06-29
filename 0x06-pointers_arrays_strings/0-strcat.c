#include "main.h"
#include <stdio.h>

/**
 * _strcat - Code to concatenet two strings
 * @dest: It stores the first string
 * @src: It stores the second string
 * Return: void
 */

char *_strcat(char *dest, char *src)

{
int m, s;

m = 0;
while (dest[m] != '\0')
{
m++;
}

s = 0;
while (src[s] != '\0')
{
dest[m] = src[s];
m++;
s++;
}
dest[m] = '\0';
return (dest);
}
