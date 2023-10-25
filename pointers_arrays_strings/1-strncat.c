#include "main.h"
#include <string.h>
/**
 * _strncat - Something useful
 * @dest: Something more useful
 * @src: Something more useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, i = 0;

	a = strlen(dest);
	while (i < n && *(src + i) != '\0')
	{
		*(dest + a + i) = *(src + i);
		i++;
	}
	return (dest);
}
