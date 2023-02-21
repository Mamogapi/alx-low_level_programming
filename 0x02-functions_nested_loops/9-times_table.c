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
				_putchar(' ');
				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 1)
		{

			for (y = 0; y < 10; y++)
			{
				_putchar('0' + y);
				_putchar(' ');
				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 2)
		{
			for (y = 0; y < 10; y++)
			{
				w = y * 2;
				if ((w / 10) > 0)
				{
					_putchar('0' + (w / 10));
				}
				else
				{
					_putchar(' ');
				}
				_putchar('0' + (w % 10));
				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 3)
		{
			for (y = 0; y < 10; y++)
			{
				w = y * 3;
				if ((w / 10) > 0)
				{
					_putchar('0' + (w / 10));
				}
				else
				{
					_putchar(' ');
				}

				_putchar('0' + (w % 10));
				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 4)
		{
			for (y = 0; y < 10; y++)
			{
				w = y * 4;
				if ((w / 10) > 0)
				{
					_putchar('0' + (w / 10));
				}
				else
				{
					_putchar(' ');
				}

				_putchar('0' + (w % 10));
				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 5)
		{
			for (y = 0; y < 10; y++)
			{
				w = y * 5;
				if ((w / 10) > 0)
				{
					_putchar('0' + (w / 10));
				}
				else
				{
					_putchar(' ');
				}

				_putchar('0' + (w % 10));
				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 6)
		{
			for (y = 0; y < 10; y++)
			{
				w = y * 6;

				if ((w / 10) > 0)
				{
					_putchar('0' + (w / 10));
				}
				else
				{
					_putchar(' ');
				}

				_putchar('0' + (w % 10));
				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 7)
		{
			for (y = 0; y < 10; y++)
			{
				w = y * 7;
				if ((w / 10) > 0)
				{
					_putchar('0' + (w / 10));
				}
				else
				{
					_putchar(' ');
				}

				_putchar('0' + (w % 10));
				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 8)
		{
			for (y = 0; y < 10; y++)
			{
				w = y * 8;
				if ((w / 10) > 0)
				{
					_putchar('0' + (w / 10));
				}
				else
				{
					_putchar(' ');
				}

				_putchar('0' + (w % 10));

				if (y < 9)
				{	_putchar(',');
					_putchar(' ');
				}
			}
		}
		if (x == 9)
		{
			for (y = 0; y < 10; y++)
			{
				w = y * 9;
				if ((w / 10) > 0)
				{
					_putchar('0' + (w / 10));
				}
				else
				{
					_putchar(' ');
				}
				_putchar('0' + (w % 10));
				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
	_putchar('\n');
}
