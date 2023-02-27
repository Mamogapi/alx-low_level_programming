#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: character variable
 * Return: integer
 */

int _atoi(char *s)
{
	int x = 0;
	int sign=1;
	unsigned int number=0;

	while (s[x] != '\0')
	{	

		if ((s[x] < '0' || s[x] > '9') && (s[x] == '-'))
		{
			sign = sign * -1;
		
		}
		else if ((s[x] >= '0' && s[x] <= '9'))
		{	
			number = number * 10 + (s[x] - '0');
			if ((s[x + 1] < '0' || s[x + 1] > '9'))
			{	
				break;
			}
		

		}
		
		x++;
	
	
	}
	return (number * sign);
}
