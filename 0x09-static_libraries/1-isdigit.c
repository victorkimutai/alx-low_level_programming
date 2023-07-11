#include "main.h"

/**
 * _isdigit -Entry point
 * @c: Character to be checked
 * Return: 1 for digit character or 0 for anything
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
