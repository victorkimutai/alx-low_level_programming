#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int line, num;

for (line = 0; line < 8; line++)
{
for (num = 0; num < 8; num++)
{
putchar(a[line][num]);
}
putchar('\0');
}
}
