#include "main.h"
/**
 * _memset - Something usefull
 * @s: Something more usefull
 * @b: Something more usefull
 * @n: Something more usefull
 *
 * Return: Something much more usefull
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
