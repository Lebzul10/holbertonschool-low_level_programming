#include "main.h"
#include <stddef.h>
/**
 * _strstr - Something usefull
 * @needle: Something more usefull
 * @haystack: Something more usefull
 *
 * Return: Something much more usefull
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) == *(needle + j))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
