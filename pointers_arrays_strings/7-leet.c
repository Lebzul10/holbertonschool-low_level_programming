#include "main.h"
/**
 * leet - Something usefull
 * @s: Something more usefull
 *
 * Return: Something much more usefull
 */
char *leet(char *s)
{
	int i = 0, a;

	while (*(s + i) != '\0')
	{
		a = *(s + i);
		if (a == 'a' || a == 'A')
		{
			*(s + i) = '4';
		}
		else if (a == 'e' || a == 'E')
		{
			*(s + i) = '3';
		}
		else if (a == 'o' || a == 'O')
		{
			*(s + i) = '0';
		}
		else if (a == 't' || a == 'T')
		{
			*(s + i) = '7';
		}
		else if (a == 'l' || a == 'L')
		{
			*(s + i) = '1';
		}
		i++;
	}
	return (s);
}
