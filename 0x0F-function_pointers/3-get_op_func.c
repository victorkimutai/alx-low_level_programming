#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - it Selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator passed as argument.
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};

int l = 0;

while (ops[p].op != NULL && *(ops[p].op) != *s)
p++;

return (ops[l].f);
}
