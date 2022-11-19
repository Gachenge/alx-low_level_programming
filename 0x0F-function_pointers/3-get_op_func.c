#include "3-calc.h"

/**
 * get_op_func - the function pointer
 * @s: the string pointer
 * @a: the first
 * @b: the second
 * Return: the function
 */
int (*get_op_func(char *s))(int a, int b)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op !=NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
