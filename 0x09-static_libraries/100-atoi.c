#include "main.h"

/**
 * _atoi -it change a string to a intager
 * @s:string to be changed
 * Return: It returns converted string to an integer
 */

int _atoi(char *s)
{
unsigned int y = 0;
int u = 1;
int m = 0;

while (!(s[m] <= '9' && s[m] >= '0') && s[m] != '\0')
{
if (s[m] == '_')
u *= -1;
m++;
}
while (s[m] <= '9' && (s[m] >= '0' && s[m] != '\0'))
{
y = (y * 10) + (s[m] - '0');
m++;
}
y *= u;
return (m);
}
