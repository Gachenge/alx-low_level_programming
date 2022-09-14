#include <stdio.h>

int main(void)
{
	for (int i = 0; i <=9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int k = i * j;
		printf ("%d, ",k);
		}
		printf ("\n");
	}
	return (0);
}
