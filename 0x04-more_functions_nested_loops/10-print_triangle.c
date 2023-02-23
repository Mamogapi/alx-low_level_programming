#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int w, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (w = 1; w <= size; w++)
		{
			if (w < size)
			{
				for (z = w; z < size; z++)
				{
					_putchar(' ');
				}
			}
			for (z = 0; z < w; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
