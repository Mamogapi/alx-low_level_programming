#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Sucess)
*/

int main(void)
{
		int x, y, z, a;

	for ( x = 0 ; x < 10 ; x++)
	{	

		for (y = 0 ; y <= 10 ; y++)
		{
	
			for (z = 0 ; z < 10 ; z++)
			{	
				
				for ( a = 1 ; a < 11 ; a++)
				{	putchar('0' + x);
                                	putchar('0' + y);
					putchar(32);
				
					if (!( x > 11 ))
					{	putchar('0' + z);
                                        	putchar('0' + a);
						putchar(',');
						putchar(32);
					}
				
				}
			}
		}
	}
	putchar('\n');
	return (0);


}
