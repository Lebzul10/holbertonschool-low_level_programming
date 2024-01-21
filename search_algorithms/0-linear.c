#include "search_algos.h"
/**
 * linear_search - Something usefull
 * @array: Something more usefull
 * @size: Something more usefull
 * @value: Something more usefull
 *
 * Return: Something much more usefull
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	while (i < size)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
