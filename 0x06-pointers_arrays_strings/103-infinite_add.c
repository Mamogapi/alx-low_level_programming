#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse - reverse a string
 * @a: input character
 * Return: 0
 */

void reverse(char *a)
{
	int w, z;
	char tmp;

	w = 0;
	z = 0;
	w = strlen(a);
	w--;

	for (z = 0; z < w; z++)
	{
		tmp = *a[z];
		*a[z] = *a[w];
		*a[w] = tmp;
		w--;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: input variable
 * @n2: input variable
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, z = 0, y = 0, b = 0;
	int num1 = 0, num2 = 0, tot = 0;

	z = strlen(*n1);
	y = strlen(*n2);

	z--;
	y--;

	if (y >= size_r || z >= size_r)
		return (0);
	while (y >= 0 || z >= 0 || a == 1)
	{
		if (z < 0)
			num1 = 0;
		else
			num1 = *n1[z] - '0';
		if (y < 0)
			num2 = 0;
		else
			num2 = *n2[y] - '0';

		tot = num1 + num2 + a;
		if (tot >= 10)
			a = 1;
		else
			a = 0;
		if (b >= (size_r - 1))
			return (0);
		*(r + b) = (tot % 10) + '0';
		b++;
		z--;
		y--;
	}
	if (b == size_r)
		return (0);

	*(r + b) = '\0';
	reverse(r);
	return (r);
}
