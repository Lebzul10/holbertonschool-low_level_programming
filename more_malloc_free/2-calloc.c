#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Something useful
 * @nmemb: Something more useful
 * @size: Something more useful
 *
 * Return: Something much more useful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
