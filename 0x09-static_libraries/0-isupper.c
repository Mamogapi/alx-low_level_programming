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
	int w;

	w = 0;

	for (x = 65; x <= 90; x++)
	{
		if (x == c)
		{
			w = 1;
		}
	}
	if (w == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
