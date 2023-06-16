#include <stdio.h>
/**
 * main -using sizeof function
 * Return: 0 (success)
 */
int main(void)
{
int i;
char z;
long int k;
long long int m;
float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("size of a long long int: %lu byte(s)\n", (unsigned long long)sizeof(m));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
