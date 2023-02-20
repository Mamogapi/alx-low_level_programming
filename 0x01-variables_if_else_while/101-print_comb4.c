#include <stdio.h>

/**
* main -  prints all possible different combinations of three digits
*
* Return: Always 0
*/

int main(void)
{
	int x, y, z;

	for (z = 0 ; z < 8 ; z++)
	{

		for (y = z + 1 ; y < 9 ; y++)
		{
			for (x = y + 1 ; x < 10 ; x++)
			{
				putchar('0' + z);
				putchar('0' + y);
				putchar('0' + x);
				if (z < 7)
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
