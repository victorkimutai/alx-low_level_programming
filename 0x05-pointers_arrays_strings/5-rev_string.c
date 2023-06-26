#include "main.h"
#include <stdio.h>

/**
 * rev_string -it prints a string by use of an array
 * @s: this is the string itself
 * Return: void
 */

void rev_string(char *s)

{
char rev = s[0];
int p = 0;
int q;

while (s[p] != '\0')
p++;
for (q = 0; q < p; q++)
{
p--;
rev = s[q];
s[q] = s[p];
s[p] = rev;
}
}
