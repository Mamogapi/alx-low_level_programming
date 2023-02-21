#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by
 * a new line
 * @n: integer number
 * Return: integer numbers
 */

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			print("%d", x);
			if (x != 98)
			printf(", ");
		}
	}
	else if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			print("%d", x);
			if (x != 98)
			printf(", ");
		}
	}
	else
	{
		printf("98");
	}
		_putchar('\n');
}
