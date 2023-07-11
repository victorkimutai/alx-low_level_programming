#include "main.h"

#include <stdlib.h>

/**
 * create_array -it create an array of size size and assign char c
 * @size: size of the array
 * @c: char to assig
 * Return: pointer to array, and if NULL it fail
 */

char *create_array(unsigned int size, char c)

{
char *m;
unsigned int z;

m = malloc(sizeof(char) * size);
if (size == 0 || m == NULL)
return (NULL);
for (z = 0; z < size; z++)
m[z] = c;
return (m);

}

