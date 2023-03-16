#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: input integer  variable
 *
 * Return:  a pointer to the allocated memory or else 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pnt;

	pnt = (unsigned int *)malloc(b);

	if (pnt != NULL)
		return (pnt);
	exit(98);
}
