#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main : assign a random number to the variable n each time it is executed
 * and diplay output based on the value of n
 * RETURN : zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	  printf("%d", n, "is positive\n");
	} else if (n == 0)
	{
	  printf("%d", n, "is zero\n");
	} else
	{
	  printf("%d", n, "is negative\n");
	}
	return (0);
}
