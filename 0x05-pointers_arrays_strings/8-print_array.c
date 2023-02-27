#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers, followed
 * by a new line
 * @a: integer value
 * @n: integer value
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n)
		printf(", ");
	}

}