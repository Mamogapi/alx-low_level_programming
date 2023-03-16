#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: integer variable
 * @max: integer variable
 * Return:  the pointer to the newly created array If min > max,
 * return NULL If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *arry, x, y, z;

	if (min > max)
		return (NULL);
	x = max - min;
	arry = malloc((x + 1) * sizeof(int));
	z = min;

	for (y = 0; z <= max; y++)
	{
		arry[y] = z;
		z++;
	}
	return (arry);
}
