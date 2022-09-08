#include<stdio.h>
/**
 * main - find sizes of types
 *
 * Return: Another nun
 */
int main(void)
{
	char charSize;
	int intSize;
	long longInt;
	long long longLong;
	float floatSize;
printf("Size of a char: %zu byte(s)\n", (sizeof(charSize)));
printf("Size of an int: %zu byte(s)\n", (sizeof(intSize)));
printf("Size of a long int: %zu byte(s)\n", (sizeof(longInt)));
printf("Size of a long long int: %zu byte(s)\n", (sizeof(longLong)));
printf("Size of a float: %zu byte(s)\n", (sizeof(floatSize)));
	return (0);
}
