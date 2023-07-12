#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program as it is
 * @argc: number of arguments in the command line
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
printf("%s\n", *argv);
return (0);
}
