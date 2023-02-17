#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/

int main(void)
{
	int x, y, z:;

	for ( z = 0 ; z != 8 ; z++)
	{	

		for (x = z + 1 ; x != 9 ; x++)
		{	
			for (y = x + 1 ; y != 10 ; y++)
			{
					putchar('0' + z);
					putchar('0' + x);
					putchar('0' + y);
					if (y != 7)
					{
						putchar(',');
						putchar(32);
					}
						y++;
			}
		}
	}
	putchar('\n');
	return (0);
}
