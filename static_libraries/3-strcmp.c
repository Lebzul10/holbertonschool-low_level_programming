#include "main.h"
/**
 * _strcmp - Something useful
 * @s1: Something more useful
 * @s2: Something more useful
 *
 * Return: Something much more useful
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, a;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			a = *(s1 + i) - *(s2 + i);
			break;
		}
		else
		{
			a = 0;
		}
		i++;
	}
	return (a);
}
