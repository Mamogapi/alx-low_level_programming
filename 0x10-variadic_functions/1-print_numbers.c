#include <stdard.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: if sepaeator is NULL exit else print numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	va_list pnt;

	va_start(pnt, n);

	if (separator == NULL)
		exit;
	for (x = 0; x < n; x++)
	{
		printf("%d%s ", va_arg(pnt, int), separator);
	}
	printf("\n");
	return (0);

}
