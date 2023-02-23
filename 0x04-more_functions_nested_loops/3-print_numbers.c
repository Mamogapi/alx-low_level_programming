#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by
 * a new line
 * Return: Always 0
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

}
