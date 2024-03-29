#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long integer
 * @index: unsigned long integer
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (n == 0 && index < 64)
		return (0);
	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
			return (n & 1);
	}
	return (-1);
}
