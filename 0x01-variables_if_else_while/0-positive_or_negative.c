#include <stdio.h>
/**
 * main -evaluating if a number is positive or negative
 * Return: (0) (success)
 */
int main(void)
{
int n = 98;
if (n < 0)
{
printf("%d is negative", n);
}
else if (n > 0)
{
printf("%d is positive", n);
}
else
{
printf("%d is zero", n);
}
return (0);
}
