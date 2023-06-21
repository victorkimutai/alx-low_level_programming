#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: (void) (success)
 */
void print_alphabet_x10(void)
{
int k;

for (k = 'a'; k <= 'z'; k++)
while (k <= 10)
_putchar(k);
k++;
_putchar('\n');
}
