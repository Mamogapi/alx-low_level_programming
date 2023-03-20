#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs
 * @d: typedef pointer function
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
