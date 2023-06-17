#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int g;

g = 'a';
while (g <= 'z')
{
if ((g != 'e' && g != 'q') && g <= 'z')
putchar(g);
g++;
}
putchar('\n');
return (0);
}
