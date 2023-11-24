#include <stdlib.h>
/**
 * array_iterators - Something useful
 * @array: Something more useful
 * @size: Something more useful
 * @action: Something more useful
 *
 * Return: Something much more useful
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL)
	{
	  for (i = 0; i < (int)size; i++)
		{
	  	action(array[i]);
		}
	}
}
