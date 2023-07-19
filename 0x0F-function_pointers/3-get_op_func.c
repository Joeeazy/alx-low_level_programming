#include <stddef.h>
#include "3-calc.h"
#include <stdio.h>
#include "function_pointers.h"

/**
*get_op_func- gets the operator required in an operation
*@s: arguments passed in the operator func
*Return: the required operator or NULL
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL)
{
if ((*ops[i].op) == *s && s[0] != '\0')
return (ops[i].f);
i++;
}

return (NULL);
}
