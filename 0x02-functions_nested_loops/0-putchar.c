#include "main.h"

/**
* main - print putchar
*
* Return: nothing
*/

int main(void)
{
	int i;
	char c;
	char s[] = "_putchar\n";
		for (i = 0; i <= 8; i++)
		{
			c = s[i];
			_putchar(c);
		}
	return (0);
}
