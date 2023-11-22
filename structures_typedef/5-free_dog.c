#include <stdlib.h>
#include "dog.h"
/**
 * reset_to_98 - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	free(d->name);
	free(d->owner);
	free(d);
}
