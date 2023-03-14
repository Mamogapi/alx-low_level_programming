#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: input integer value
 * @c: input character value
 * Return: a pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	char arry;
	int x = 0;
	arry = malloc((size) * sizeof(char));

	if (size == 0)
		return (NULL);

	for(; x < size; x++)
	{
		arry[x] = c;
	}
	arry[x] = '\0';
	return (arry);


}
