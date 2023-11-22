#include "dog.h"
#include <stdlib.h>
/**
 * reset_to_98 - Something useful
 * @d: Something more useful
 *
 * Return: Something much more useful
 */
void print_dog(struct dog *d)
{
  if (d == NULL)
	{
	  return;
	}
  if (d->name == NULL)
	{
	  d->name = "(nil)";
	}
  if (d->owner == NULL)
    {
      d->owner = "(nil)";
    }
  printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
