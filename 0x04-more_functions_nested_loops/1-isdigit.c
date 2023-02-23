#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: input value of a charector
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	int w;
	int x;

	x = 0;

	for (w = 48; w < 58; w++)
	{
		if (w == c)
		{
			x = 1;
		}
	}
	if (x == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
