#include <stdio.h>

int main(void)
{
	int hr, min;

	for(hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
		printf ("%02d:%02d\n",hr,min);
		}
	}
	return (0);
}

