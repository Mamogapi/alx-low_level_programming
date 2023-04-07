#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned
 * int
 * @b:  pointing to a string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int x = 0;

	if (b == NULL)
		return (0);
	while (b[x] == '0' || b[x] == '1')
	{
		num <<= 1;
		num += b[x] - '0';
		x++;
	}
	return (num);
}
