#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - doubles the new memory space location
 * @str: the string occuping the space
 * Return: 0 (success)
 */

char *_strdup(char *str)

{

char *a;
int l, p = 0;

if (str == NULL)

return (NULL);

l = 0;

while (str[l] != '\0')

l++;
a = malloc(sizeof(char) * (l + 1));

if (a == NULL)
return (NULL);
for (p = 0; str[p]; p++)
a[p] = str[p];
return (a);

}

