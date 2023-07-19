#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - it returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of the two numbers
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns the subtraction of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The difference of the two numbers
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - gives the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of the two numbers
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - gives the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient of two numbers.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - gives the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of the two numbers.
 */
int op_mod(int a, int b)
{
return (a % b);
}

