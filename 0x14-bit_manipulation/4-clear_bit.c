#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: unsigned long int
 * @n: unsigned long int
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
