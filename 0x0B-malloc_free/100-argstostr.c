#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry of the cord
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
int p, w;
int q = 0;
int n = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);
for (p = 0; p < ac; p++)
{
for (w = 0; av[p][w]; w++)
n++;
}
n += ac;
str = malloc(sizeof(char) * n + 1);
if (str == NULL)
return (NULL);
for (p = 0; p < ac; p++)
{
for (w = 0; av[p][w]; w++)
{
str[q] = av[p][w];
q++;
}
if (str[q] == '\0')
{
str[q++] = '\n';
}
}
return (str);
}
