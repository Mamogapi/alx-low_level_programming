#include "3-calc.h"

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

/**
 * op_add - function that add two integer
 * @a: integer variable
 * @b: integer variable
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substract b from a
 * @a: integer variable
 * @b: integer variable
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply a and b
 * @a: integer variable
 * @b: integer variable
 *
 * Return: product of two integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide two integer
 * @a: integer variable
 * @b: integer variable
 *
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that mod that a and b
 * @a: integer variable
 * @b: integer variable
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
