
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - joins the end of the output with the  size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{

char *conct;
int num, k;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
num = k = 0;
while (s1[num] != '\0')
num++;
while (s2[k] != '\0')
k++;
conct = malloc(sizeof(char) * (num + k + 1));
if (conct == NULL)
return (NULL);
num = k = 0;
while (s1[num] != '\0')
{
conct[num] = s1[num];
num++;
}
while (s2[k] != '\0')
{
conct[num] = s2[k];
num++, k++;
}
conct[num] = '\0';
return (conct);

}

