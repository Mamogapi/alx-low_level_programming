#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input integer variable
 *
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root_recursion(n, 0));
}

/**
 * root_recursion - finds the natural square root of a number
 * @x: input integer variable of square root
 * @y: input integer variable to increment 
 *
 * Return: the square root
 */

int root_recursion(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (root_recursion(x, y + 1));
}
