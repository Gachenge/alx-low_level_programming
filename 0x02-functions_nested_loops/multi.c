#include <stdio.h>

int main(void)
{
	for (int i = 0; i <=9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int k = i * j;
			if (k <10){
				putchar(k + '0');
			}
			else if (k >=10)
			{
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
			}
		}
		putchar('\n');
	}
}
