#include "main.h"

/**
 * print_chessboard - create a chess
 * @a array
 * Return: nil
 */

void print_chessboard(char (*a)[8])
{
	char b[] = "rkbqkbkr";
	char c[] = "p";
	char d[] = "P";
	char e[] = "RKBQKBKR";
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == 0)
				a[8] = b[j];
			else if (i == 1)
				a[8] = c;
			else if ( i > 1 && i < 6)
				a[8] = ' ';
			else if (i == 6)
				a[8] = d[j];
			else if (i == 7)
				a[8] = e[j];
		}
	}
	for 
}
