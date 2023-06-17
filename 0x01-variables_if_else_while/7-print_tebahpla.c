#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int d;

d = 'z';
while (d >= 'a')
{
putchar(d);
d--;
}
putchar('\n');
return (0);
}
