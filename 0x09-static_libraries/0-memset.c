#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @n: number bytes of the memory
 * @b:  the constant byte b
 * @s: pointer
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
