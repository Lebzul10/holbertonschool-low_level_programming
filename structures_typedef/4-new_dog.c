#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * reset_to_98 - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *new;
  
  new = malloc(sizeof(dog_t));
  if (new == NULL)
	{
	  return (NULL);
	}
  new->name = malloc(strlen(name) + 1);
  if (new->name == NULL)
	{
	  free(new);
	  return (NULL);
	}
  strcpy(new->name, name);
  new->age = age;
  new->owner = malloc(strlen(owner) + 1);
  if (new->owner == NULL)
	{
	  free(new->name);
	  free(new);
	  return (NULL);
	}
  strcpy(new->owner, owner);

  return (new);	
}
