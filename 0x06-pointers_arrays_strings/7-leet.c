#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @a: string variable
 * Return:  encoded string
 */

char *leet(char *a)
{
	int x, y;
	char strngUPP[] = "AEOTL";
	char strngLPP[] = "aeotl";
	char z[] = "43071";

	for (y = 0; a[y] = '\0'; y++)
	{
		for (x = 0; x < 5; x++)
		{
			if (a[y] == strngUPP[x] || a[y] == strngLPP[x])
				a[y] = z[x];
		}
	}
	return (a);

}
