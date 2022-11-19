#include "3-calc.h"

/**
 * main - entry
 * @ac: the count
 * @av: the vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int num1, num2;
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	op = av[2];
	num2 = atoi(av[3]);
	if (get_op_func(op) == NULL || op[1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
