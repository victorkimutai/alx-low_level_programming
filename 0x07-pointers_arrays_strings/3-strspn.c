#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring.
 * @s: The string to be measured.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in @s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int b = 0;
int num;

while (*s)
{
for (num = 0; accept[num]; num++)
{
if (*s == accept[num])
{
b++;
break;
}
else if (accept[num + 1] == '\0')
return (b);
}
s++;
}
return ('\0');
}
