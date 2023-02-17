#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/

int main(void)
{
	int x, y, z;

	for ( x = 0 ; x != 8 ; x++)
	{	

		for (y = x + 1 ; y != 9 ; y++)
		{	
			a = y + 1;
			for (z= 0 ; z < 10 ; z++)
			{
				for ( a = 0 ; a < 10 ; a++)
				{
					putchar('0' + x);
					putchar('0' + y);
					putchar('0' + a);
					if (x != 7)
					{
						putchar(',');
						putchar(32);
					}
						a++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
