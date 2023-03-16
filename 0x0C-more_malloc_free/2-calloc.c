#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: integer variable
 * @size: integer variable
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int x, y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = nmemb * size;
	str = malloc(x);

	if (str == NULL)
		return (NULL);
	for (y = 0; y < x; y++)
		str[y] = 0;
	return (str);
}
