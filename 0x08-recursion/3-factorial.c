#include "main.h"
#include <stdio.h>

/**
 * factorial - it prints the factorial of a number
 * @n: the number that will return the factorial
 * Return: return the factorial of n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
