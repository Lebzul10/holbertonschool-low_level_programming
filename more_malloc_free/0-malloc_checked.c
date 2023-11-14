#include <stdlib.h>
/**
 * malloc_checked - Something useful
 * @b: Something more useful
 *
 * Return: Something much more useful
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
