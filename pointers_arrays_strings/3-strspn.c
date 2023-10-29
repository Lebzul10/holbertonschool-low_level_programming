#include "main.h"
/**
 * _strspn - Something usefull
 * @s: Something more usefull
 * @accept: Something more usefull
 *
 * Return: Something much more usefull
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, a = 0;

	while (*(s + i) != ' ' && *(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				a++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
