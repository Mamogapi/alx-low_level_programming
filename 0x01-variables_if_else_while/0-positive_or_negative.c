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
	  printf("%d is positive\n", n);
	} else if (n == 0)
	{
	  printf("%d is negative\n", n);
	} 
	else
	{
	  printf("%d is zero\n", n);
	}
	return (0);
}
