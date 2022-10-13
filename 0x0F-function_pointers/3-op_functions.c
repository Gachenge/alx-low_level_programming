#include "3-calc.h"

/**
 * op_add - the additin
 * @a: one integer
 * @b: other integer
 * Return: always
 */

int op_add(int a,int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: the first
 * @b: the second
 * Return: not
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: the one
 * @b: the two
 * Return: nil
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: the one
 * @b: the two
 * Return: nil
 */

int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: the up
 * @b: the div
 * Return: 0
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
