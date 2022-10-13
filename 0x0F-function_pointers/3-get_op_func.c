#include "3-calc.h"

/**
 * get_op_func - which operator
 * @s: the operator chosen
 * Return: 0
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
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			break;
	}
	return (ops[i].f);
}
