#include <stdio.h>

/**
 * main -  finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 *
 *  Return: Always 0.
 */
int main(void)
{
	long x, y;

	x = 612852475143;

	for (y = 2; x > y; y++)
	{
		if ( x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	_putchar('\n');
	return (0);
}
