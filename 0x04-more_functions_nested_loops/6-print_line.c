#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n:  is the number
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
