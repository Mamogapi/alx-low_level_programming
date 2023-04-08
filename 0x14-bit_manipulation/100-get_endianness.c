#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;
	char *check_end = (char *)&x;

	if (*check_end)
		return (1);

	return (0);
}
