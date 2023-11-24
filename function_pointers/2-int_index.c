#include <stdlib.h>
/**
 * int_index - Something useful
 * @array: Something more useful
 * @size: Something more useful
 * @cmp: Something more useful
 *
 * Return: Something much more useful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i;

  if (size <= 0)
	{
	  return (-1);
	}
  if (cmp != NULL && array != NULL)
	{
	  for (i = 0; i < size; i++)
		{
		  if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
