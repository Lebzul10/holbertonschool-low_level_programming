#include <dog.h>
#include <stdlib.h>
/**
 * reset_to_98 - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
