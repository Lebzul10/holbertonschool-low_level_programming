#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Something useful
 * @n: Something more useful
 * @s1: Something more useful
 * @s2: Something more useful
 *
 * Return: Something much more useful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, l1, l2;
	char *a;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if ((int)n >= l2)
	{
		n = l2;
	}
	a = malloc(sizeof(char) * (n + l1 + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < l1 || j < (int)n)
	{
		if (i < l1)
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
