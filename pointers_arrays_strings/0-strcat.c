#include "main.h"
#include <string.h>
/**
 * _strcat - Something useful
 * @dest: Something more useful
 * @src: Something more useful
 *
 * Return: Something much more useful
 */
char *_strcat(char *dest, char *src)
{
	int a, b, i = 0;

	a = strlen(dest);
	b = strlen(src);
	while (i < b)
	{
		*(dest + a + i) = *(src + i);
		i++;
	}
	return (dest);
}
