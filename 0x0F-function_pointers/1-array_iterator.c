#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - gives each array element on a newline
 * @array: array that hold the element
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int m;

if (array == NULL || action == NULL)
return;


for (m = 0; m < size; m++)
{
action(array[m]);
}
}

