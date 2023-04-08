#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned
 * int
 * @b:  pointing to a string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, y = 1;
	int x = 0, z;

	while (b != NULL)
		z++;
	if (b == NULL)
		return (0);
	for (x = z - 1; c >= 0; x--)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		if (b[x] == '1')
			num += y;
		y *= 2;
	}
	return (num);
}
