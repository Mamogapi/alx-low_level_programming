#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number,  + if n is greater
 * than zero, 0 if n is zero and - if n is less than zero
 * @n: contain the number
 * Return:  1 if n is greater than zero, 0 if n is zero
 * and if n is less than zero
 */

int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		x = 0;
	}
	else
	{
		_putchar('-');
		x = -1;
	}
	return (x);
}
