#include "main.h"
/**
 * string_toupper - Something useful
 * @str: Something more useful
 *
 * Return: Something much more useful
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' &&  *(str + i) <= 'z')
		{
			*(str + i) -= ' ';
		}
		i++;
	}
	return (str);
}
