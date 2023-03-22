#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function executes a function given as a parameter
 * on each element of an array.
 * @array: integer pointer variable
 * @size: unsigned integer variable
 * @action: function pointer
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action != NULL)
	{
		for (x = 0; x < size; x++)
			(action)(array[x]);
	}
}
