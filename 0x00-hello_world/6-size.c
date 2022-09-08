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
printf("Size of a char: %c\n byte(s)", (sizeof(charSize)));
printf("Size of an int: %d\n byte(s)", (sizeof(intSize)));
printf("Size of a long int: %ld\n byte(s)", (sizeof(longInt)));
printf("Size of a long long int: %lld\n byte(s)", (sizeof(longLong)));
printf("Size of a float: %f\n byte(s)", (sizeof(floatSize)));
	return (0);
}
