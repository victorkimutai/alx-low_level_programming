#include <stdio.h>
#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int man, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (man = 0; n[man] != '\0'; man++)
{
for (j = 0; j < 10; j++)
{
if (n[man] == s1[j])
{
n[man] = s2[j];
}
}
}
