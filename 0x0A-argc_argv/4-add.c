#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * check_num - check if in the string there are digit
  * @str: array str
  *
  * Return: Always 0 (Success)
  */
int check_num(char *str)
{

unsigned int total;

total = 0;

while (total < strlen(str))

{
if (!isdigit(str[total]))
{
return (0);
}
total++;
}
return (1);
}

/**
  * main - Print the name of the program
  * @argc: Count arguments
  * @argv: the Arguments
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{

int total;
int m;
int sum = 0;

total = 1;
while (total < argc)
{
if (check_num(argv[total]))

{
m = atoi(argv[total]);
sum += m;
}

else
{
printf("Error\n");
return (1);
}
total++;
}
printf("%d\n", sum);
return (0);
}
