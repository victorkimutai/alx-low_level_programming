#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
char m;

char l;

m = 'a';
l = 'A';
while (m <= 'z')
{
putchar(m);
m++;
}
while (l <= 'Z')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
