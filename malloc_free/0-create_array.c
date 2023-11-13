#include <stdlib.h>
/**
 * create_array - Something useful
 * @size: Something more useful
 * @c: Something more useful
 *
 * Return: Something much more useful
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigend int i;

	arr = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
