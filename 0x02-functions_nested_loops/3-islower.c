#include <stdio.h>


/**
 * _islower - checks for lowercase character
 * @c: contain a character
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
													return (0);

}
