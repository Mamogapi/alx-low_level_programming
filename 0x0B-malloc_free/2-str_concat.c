#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function the concatenates two strings
 * @s1: input string variable
 * @s2: intput string variable
 *
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *wrd;
	x = strng_leng(s1);
	y = strng_leng(s2);

	wrd = malloc(((x + y) + 1) sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


}
