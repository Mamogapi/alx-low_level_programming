#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: string double pointer variable
 * @to: string point pointer variable
 *
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;	
}
