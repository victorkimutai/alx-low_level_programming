#include "main.h"
#include <stdio.h>

/**
* swap_int - Swap two pointers with diffrent values
* @a: Hold the first value
* @b: Holds the second value
* Return: Void
*/

void swap_int(int *a, int *b)
{
int k;

k = *b;
*b = *a;
*a = k;
}
