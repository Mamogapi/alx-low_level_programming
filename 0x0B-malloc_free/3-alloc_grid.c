#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: input integer value
 * @height: input integer value
 *
 * Return: NULL on failure If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **pnt, q, w;

	pnt = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (pnt == NULL)
		return (NULL);

	for (q = 0; q < height; q++)
	{
		pnt[q] = malloc(width * sizeof(int));

		if (pnt[q] == NULL)
		{
			for (w = 0; w < q; w++)
				free(pnt[w]);
			free(pnt);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			pnt[q][w] = 0;
	}
	return (pnt);

}
