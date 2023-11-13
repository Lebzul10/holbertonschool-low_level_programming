#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Something usefull
 * @s1: Something more usefull
 * @s2: Something more usefull
 *
 * Return: Something much more usefull
 */
char *str_concat(char *s1, char *s2)
{
	int lent, len1, len2, i = 0, j = 0;
	char *a;

	if (s1 == NULL)
	{
		i = strlen(s1);
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		j = strlen(s2);
	}
	else
	{
		len2 = strlen(s2);
	}
	lent = len1 + len2;
	a = malloc(lent * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < len1 || j < len2)
	{
		if (i < len1)
		{
			a[i] = s1[i];
			i++;
		}
		else
		{
			a[i + j] = s2[j];
		  j++;
		}
	}
	a[i + j] = '\0';
	return (a);
}
