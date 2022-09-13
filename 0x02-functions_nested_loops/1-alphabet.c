#include "main.h"
/**
 * main - print the alphabet
 *
 * Return: nothing
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
}
/**
 * print_alphabet - print small letters
 *
 * Return: none
 */
void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
