#include <stdio.h>

int main(void)
{
	int hr, min;

	for(hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			int i = min / 10;
			int j = min % 10;
			int k = hr / 10;
			int l = hr % 10;
			putchar(k + '0');
			putchar(l + '0');
			putchar(':');
			putchar(i + '0');
			putchar(j + '0');
			putchar('\n');
		}
	}
	return (0);
}

