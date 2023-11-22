#include <dog.h>
#include <stdlib.h>
/**
 * init_dog - Something useful
 * @d: Something more useful
 * @name: Something more useful
 * @age: Something more useful
 * @owner: Something more useful
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
