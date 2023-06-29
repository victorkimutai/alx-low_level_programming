#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first string
 * @s2: second string
 * Return: s1[i] - s2[i] (success)
 */

int _strcmp(char *s1, char *s2)
{
int string;

string = 0;
while (s1[string] != '\0' && s2[string] != '\0')
{

if (s1[string] != s2[string])
{
return (s1[string] - s2[string]);
}
string++;
}
return (0);
}
