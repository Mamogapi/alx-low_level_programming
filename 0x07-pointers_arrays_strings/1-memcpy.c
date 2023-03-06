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
	char *destcp = *dest;
	char *srccp = *src;

	while (n--)
	{
		destcp[n] = srccp[n];
	}
	return (dest);
}

 
