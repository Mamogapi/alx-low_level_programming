#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 */

void times_table(void)
{
	int x, y, w;

	for (x = 0; x < 10; x++)
	{
		if (x == 0)
		{
			for (y = 0; y < 10; y++)
			{
				_putchar('0' + x);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 1)
		{

			for (y = 0; y < 10; y++)
                        {
				_putchar('0' + y);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 2)
		{
			for (y = 0; y < 10; y++)
                        {
				w = y * 2;
				_putchar('0' + w);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 3)
		{
			for (y = 0; y < 10; y++)
                        {
				w = y * 3;
				_putchar('0' + w);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 4)
		{
			for (y = 0; y < 10; y++)
                        {
				w = y * 4;
				_putchar('0' + w);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 5)
		{
			for (y = 0; y < 10; y++)
                        {
				w = y * 5;
				_putchar('0' + w);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 6)
		{
			for (y = 0; y < 10; y++)
                        {
				w = y * 6;
				_putchar('0' + w);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 7)
		{
			for (y = 0; y < 10; y++)
                        {
				w = y * 7;
				_putchar('0' + w);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 8)
		{
			for (y = 0; y < 10; y++)
                        {
				w = y * 8;
				_putchar('0' + w);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		if (x == 9)
		{
			for (y = 0; y < 10; y++)
                        {
				w = y * 9;
				_putchar('0' + w);
				_putchar(',');
				if(y < 9)
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
