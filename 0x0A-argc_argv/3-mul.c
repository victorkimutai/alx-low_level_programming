#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)

{
int h, l, length, k, p, digit;

p = 0;
length = 0;
k = 0;
l = 0;
h = 0;
digit = 0;
while (s[length] != '\0')
length++;
while (p < length && h == 0)
{
if (s[p] == '-')
++l;
if (s[p] >= '0' && s[p] <= '9')
{
digit = s[p] - '0';
if (l % 2)
digit = -digit;
k = k * 10 + digit;
h = 1;
if (s[p + 1] < '0' || s[p + 1] > '9')
break;
h = 0;
}
p++;
}
if (h == 0)
return (0);
return (k);
}

/**
  * main - multiplies two numbers
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: 0 (Success), 1 (Error)
  */

int main(int argc, char *argv[])

{
int res, num8, num9;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num8 = _atoi(argv[1]);
num9 = _atoi(argv[2]);
res = num8 *num9;
printf("%d\n", res);
return (0);

}
