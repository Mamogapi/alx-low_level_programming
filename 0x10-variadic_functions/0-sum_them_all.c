#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: unsigned integer variable
 *
 * Return: if n is 0 return 0 else the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list pnt;

	va_start(pnt, n);

	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
		sum += va_arg(pnt, int);

	va_end(pnt);
	return (sum);

}
