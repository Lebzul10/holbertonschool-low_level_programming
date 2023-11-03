#include "main.h"
/**
 * _strpbrk - Something usefull
 * @s: Something more usefull
 * @accept: Something more usefull
 *
 * Return: Something much more usefull
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
