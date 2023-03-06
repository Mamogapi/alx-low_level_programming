#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: string poniter variable
 * @size: int variable
 */

void print_diagsums(int *a, int size)
{
	int x, z, w = 0, y = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		w = w + a[x];

	for (z = size - 1; z <= (size * size) - size; z = z + size - 1)
		y = y + a[z];

	printf("%d, %d\n", w, y);
}
