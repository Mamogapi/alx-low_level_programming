#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: character variable
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b;
	char temp = s[0];

	b = 0;

	while (s[b] != '\0')
		b++;

	for (a = 0; a < b; a++)
	{
		b--;
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
}
