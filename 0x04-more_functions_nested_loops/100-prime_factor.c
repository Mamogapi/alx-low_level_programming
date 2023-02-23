#include <stdio.h>
#include <math.h>

/**
 * main -  finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 *
 *  Return: Always 0.
 */
int main(void)
{
	long x, y, z;
	double square;

	x = 612852475143;
	square = sqrt(x);

	for (y = 1; y <= square; y++)
	{
		if (x % y == 0)
		{
			z = x / y;
		}
	}
	printf("%ld\n", z);
	return (0);
}
