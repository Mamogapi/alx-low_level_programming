#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @n: is the number of strings passed to the function
 * @separator: is the string to be printed between the strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;
	va_list pnt;

	va_start(pnt, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(pnt, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str)

		if (separator != NULL && x < (n - 1))
			printf("%s", separator);

	}
	va_end(pnt);
	printf("\n");
}
~
