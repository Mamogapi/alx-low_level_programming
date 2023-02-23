#include <stdio.h>

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int w, x;

	for (w = 0; w < 10; w++)
	{
		for (x = 0; x <= 14; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	 _putchar('\n');
}
