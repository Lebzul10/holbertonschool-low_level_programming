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
		s1[0] = '\0';
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2[0] = '\0';
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
	while (s1[i] != '\0' || s2[j] != '\0')
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
