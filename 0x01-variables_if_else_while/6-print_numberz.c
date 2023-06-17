#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int k;

k = 0;
while (k < 10)
{
putchar(k + '0');
k++;
}
putchar('\n');
return (0);
}
