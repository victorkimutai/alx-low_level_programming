#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int j;

for (j = 0; j < 10; j++)
{
putchar(j + '0');
if (j < 9)
{
putchar(',');
putchar(' ');
}}
putchar('\n');
return (0);
}
