#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@a: contant integer value
 * Return: Always 0
 */

int _abs(int a)
{
	int x;

	if (a > 0)
	{
		x = a;
	}
	else if (a == 0)
	{
		x = a;
	}
	else
	{
		x = a * -1;
	}
	return (x);
}
