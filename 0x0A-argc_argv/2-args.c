#include <stdio.h>

#include "main.h"



/**
 * main - prints all arguments it receives from the command line
 * @argc: number of arguments in the command line
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
int m;

for (m = 0; m < argc; m++)
{
printf("%s\n", argv[m]);
}
return (0);
}

