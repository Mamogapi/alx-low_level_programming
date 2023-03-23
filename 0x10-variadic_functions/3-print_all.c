#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	va_list pnt;
	char *str, *sep = "";

	va_start(pnt, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(pnt, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(pnt, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(pnt, double));
					break;
				case 's':
					str = va_arg(pnt, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(pnt);

}
