#include "main.h"
/**
 * _strlen - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
