#include <stdarg.h>
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
	unsigned int x;
	va_list pnt;

	va_start(pnt, n);

	for (x = 0; x < n; x++)
	{
		if (separator != NULL)
		{	
			printf("%i", va_arg(pnt, int));
			printf("%s", separator);
		}
		else
			printf("%i", va_arg(pnt, int));
	}
	printf("\n");
	va_end(pnt);

}
