#include "main.h"
/**
 * _memcpy - Something usefull
 * @n: Something more usefull
 * @src: Something more usefull
 * @dest: Something more usefull
 *
 * Return: Something much more usefull
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
