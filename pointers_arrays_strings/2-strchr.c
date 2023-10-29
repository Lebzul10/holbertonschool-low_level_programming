#include "main.h"
/**
 * _strchr - Something usefull
 * @s: Something more usefull
 * @c: Something more usefull
 *
 * Return: Something much more usefull
 */
char *_strchr(char *s, char c)
{
	int i = 0, a = 0;

	if (c != '\0')
	{
		while (*(s + i) != c && *(s + i) != '\0')
		{
			i++;
		}
		while (*(s + a + i) != '\0')
		{
			return (s + a + i);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
