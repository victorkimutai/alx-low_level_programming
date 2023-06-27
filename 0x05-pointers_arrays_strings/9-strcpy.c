#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to a string
 * @src: copy from a string
 * Return: string (success)
 */
char *_strcpy(char *dest, char *src)
{
int e = 0;
int a = 0;

while (*(src + e) != '\0')
{
e++;
}
for ( ; a < e ; a++)
{dest[a] = src[a];
}
dest[e] = '\0';
return (dest);
}

