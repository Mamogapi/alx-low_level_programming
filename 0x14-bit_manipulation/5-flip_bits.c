#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: the number of bits you would need to flip to get from one
 * number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int num = n ^ m;

	while (num > 0)
	{
		if (num & 1)
			count++;
		num &= (num - 1);
	}
	return (count);
}
