#include <stdio.h>
#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: integer value
 * Return: 0
 */


void print_times_table(int n)
{
	int x, y;

	if (n < 15 || n < 0)

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			if (x == 0)
			_putchar(((x * y) % 10) + '0');
			else if ((x * y) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((x * y) + '0');
			}
			else if ((x * y) < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((x * y) / 10) + '0');
				_putchar(((x * y) % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((x * y) / 100) + '0');
				_putchar((((x * y) / 10) % 10) + '0');
				_putchar(((x * y) % 10) + '0');
			}
		}
		_putchar('\n');
	}



}
