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
		_putchar('0');
			for (y = 1; y < 10; y++)
			{
				w = x * y;

				_putchar(',');
				_putchar(' ');

				if (w <= 9)
				{	_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (w / 10));
					_putchar('0' + (w % 10));
				}
			}
		_putchar('\n');
	}
}
