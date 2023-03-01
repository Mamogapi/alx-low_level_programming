#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}

	if (x / n != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
