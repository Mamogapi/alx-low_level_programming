#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: input value of a charector
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	char x;

	for (x = 'A'; x = 'Z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}

	return (0);
}
