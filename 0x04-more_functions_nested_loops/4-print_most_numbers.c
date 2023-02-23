#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int z;

	for (z = 0; z < 10; z++)
	{
		if (z != 2 && z != 4)
		{
			_putchar(z);
		}
	}
	_putchar('\n');
}
