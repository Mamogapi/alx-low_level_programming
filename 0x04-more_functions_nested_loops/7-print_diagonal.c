#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int x, w;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (w = 0; w < x; w++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}


}
