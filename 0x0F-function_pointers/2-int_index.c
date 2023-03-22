#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: integer pointer variable
 * @size: integer variable
 * @cmp: function pointer
 *
 * Return: if size <= 0 return 0, if no element match return -1
 * returns the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if((*cmp(array[x] == x)
			return (x);
	}
	return (-1);
}
