#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched
 * @c: The caharacter to be located
 * Return: if c is found then a pointer to the first occurence
 * if c is not found then it is NULL
 */

char *_strchr(char *s, char c)
{
int y;

for (y = 0; s[y] >= '\0'; y++)
{
if (s[y] == c)
return (s + y);
}
return ('\0');
}
