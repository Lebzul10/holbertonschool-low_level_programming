#include <stdlib.h>
/**
 * alloc_grid - Something usefull
 * @height: Something more usefull
 * @width: Something more usefull
 *
 * Return: Something much more usefull
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j, **a;

	a = malloc(height * sizeof(int *));
	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
