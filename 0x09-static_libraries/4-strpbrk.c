#include "main.h"

/**
 * _strpbrk - it searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for.
 * Return: If a set is matched - a pointer to the martched byte
 * if no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
int num;

while (*s)
{
for (num = 0; accept[num]; num++)
{
if (*s == accept[num])
return (s);
}
s++;
}
return ('\0');
}
