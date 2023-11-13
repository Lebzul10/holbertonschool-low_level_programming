#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Something useful
 * @str: Something more useful
 *
 * Return: Something much more useful
 */
char *_strdup(char *str)
{
	int i = 0, len;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	a = malloc(len * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	while (len > 0)
	{
		a[i] = str[i];
		i++;
		len--;
	}
	a[i] = '\0';
	return (a);
}
