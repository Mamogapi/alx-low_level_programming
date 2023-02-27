#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates
 * the value it points to to 98
 * @n: variables
 * Return: 0
 */

void reset_to_98(int *n)
{

	int x;

	x = 98;

	*n = x;
}
