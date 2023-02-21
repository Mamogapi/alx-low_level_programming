#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line
 * Return: 0
 */

int main(void)
{
	unsigned long int x, x1, x2, y, y1, y2, z, z1, z2;
	unsigned long int a, a1, a2;

	x = 1;
	y = 2;
	a = 1000000000;
	z = x + y;

	printf("%lu, ", x);
	printf("%lu, ", y);

	for (a1 = 3; a1 < 89; a1++)
	{
		printf("%lu, ", z);
		x = y;
		y = z;
		z = x + y;
	}
	y1 = y / a;
	y2 = y % a;
	z1 = z / a;
	z2 = z % a;

	for (a2 = 89; a2 < 98; a2++)
	{
		printf("%lu%lu, ", z1, z2);
		x1 = y1;
		x2 = y2;
		y1 = z1;
		y2 = z2;
		z1 = x1 + y1 + ((x2 + y2) / a);
		z2 = (x2 + y2) % a;
	}
	printf("%lu%lu\n", z1, z2);

	return (0);
}
