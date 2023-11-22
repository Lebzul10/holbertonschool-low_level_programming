#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Something useful
 * @d: Something more useful
 *
 * Return: Something much more useful
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
