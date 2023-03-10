#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the numbers from 1 to 100, followed by a new line
 * But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0
 */

int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if ((z % 3 == 0) && (z % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (z % 3 == 0)
		{
			printf("Fizz");
		}
		else if (z % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", z);
		}
		if (z != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

