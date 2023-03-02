#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: character input
 * @size: integer input
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int a, d, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		d = size - a < 10 ? size - a : 10;
		printf("%08x:", a);
		for (c = 0; c < 10; c++)
		{
			if (c < d)
				printf("%02x", *(b + a + c));
			else
				printf(" ");
			if (c % 2)
				printf(" ");
		}
		for (c = 0; c < d; c++)
		{
			int z = *(b + a + c);

			if (z < 32 || z > 132)
				z = '.';
			printf("%c", z);
		}
		printf("\n");
		a += 10;
	}
}
