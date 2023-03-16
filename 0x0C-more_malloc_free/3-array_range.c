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
	int *arry, x;

	if (min > max)
		return (NULL);
	x = max - min;
	arry = malloc((x + 1) * sizeof(int));

	for (x = 0; min <= max; x++)
	{
		arry[x] = min;
		min++;
	}
	return (arry);
}
