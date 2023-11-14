#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Something usefull
 * @old_size: Something more usefull
 * @new_size: Something more usefull
 * @ptr: Something more usefull
 *
 * Return: Something much more usefull
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;

	if (ptr != NULL)
	{
		if (new_size > old_size)
		{
			free(ptr);
			a = malloc(new_size);
		}
		if (new_size < old_size)
		{
			free(ptr);
			a = malloc(new_size);
		}
		else if (new_size == old_size)
		{
			return (ptr);
		}
		else if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	else if (ptr == NULL)
	{
		free(ptr);
		a = malloc(new_size);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
