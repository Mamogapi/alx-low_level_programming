#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function  prints a name
 * @name: string pointer vriable
 * @f: function pointer
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	(f)(name);
}
