#include <stdio.h>
#include "main.h"

/**
 * _memcpy- copies n bytes from memory area src to memory area dest
 * @n: int variable
 * @src: pointer
 * @dest: pointer
 *
 * Return:  a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
