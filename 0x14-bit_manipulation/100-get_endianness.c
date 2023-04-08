#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * 
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *test;

	x = 1;
	*test = (char*) &x;

	return (*test);
}
