#include "main.h"


/**
 * reverse - reverse a string
 * @a: input character
 * Return: 0
 */

void reverse(char *a)
{
	int w = 0;
	int j = 0;
	char tmp;

	while (*(a+w)!='\0')
	{
		w++;
	}
	w-;

	for (j = 0; j < w; j++,w-)
	{
		tmp = *(a + j);
		*(a + j) = *(n + a);
		*(a + j) = tmp;
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
	 int overflow = 0, w = 0, j = 0, digits = 0;
	 int val1 = 0, val2 = 0, temp_tot = 0;

	 while (*(n1 + w) != '\0')
		 i++;
	 while (*(n2 + j) != '\0')
		 j++;
	 w--;
	 j--;
	 if (j >= size_r || w >= size_r)
		 return (0);
	 while (j >= 0 || w >= 0 || overflow == 1)
	 {
		 if (w < 0)
			 val1 = 0;
		 else
			 val1 = *(n1 + w) - '0';
		 if (j < 0)
			 val2 = 0;
		 else
			 val2 = *(n2 + j) - '0';
		 temp_tot = val1 + val2 + overflow;
		 if (temp_tot >= 10)
			 overflow = 1;
		 else
			 overflow = 0;
		 if (digits >= (size_r - 1))
			 return (0)
		 *(r + digits) = (temp_tot % 10) + '0';
		 digits++;
		  j--;
		  w--;
	 }
	 if (digits == size_r)
		 return (0);
	 *(r + digits) = '\0';
	 rev_string(r);
	 return (r);
}
