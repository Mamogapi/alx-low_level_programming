#include "main.h"
#include <stdio.h>

int calc_prm(int x, int y);

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: integer input variable
 *
 * Return:  returns 1 if the input integer is a prime number,
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (calc_prm(n, 2));
}

/**
 * calc_prm - check if the ingeter is a prime or not
 * @x: input integer variable to check if is a prime
 * @y: input integer variable to increment
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */

int calc_prm(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (calc_prm(x, y + 1));
}
