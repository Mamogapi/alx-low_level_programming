#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @n: is the number of strings passed to the function
 * @separator: is the string to be printed between the strings
 * 
 * Return: print string else if separator is null dont and if string is null
 * print nil.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x;
	char str = "nil";
	va_list pnt;

	va_start(pnt, n);

	if (seperator == NULL)
		exit;
	for (x = 0; x < n; x++)
	{
		if (va_arg(pnt, int) == NULL)
			printf("%s%s ", str, separator);
		else
			printf("%s%s ",va_arg(pnt, int), separator); 	
	}
	va_end(pnt);
	printf("\n");
	return (0);
}