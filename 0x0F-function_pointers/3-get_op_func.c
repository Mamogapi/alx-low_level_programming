#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function selects the correct function to perform
 * the operation asked by the user
 * @s: string pointer variable
 *
 * Return: if s doesnt match return null or pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op != *s)
		i++;

	return (ops[i].f);
}
