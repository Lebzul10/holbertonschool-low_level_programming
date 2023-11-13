#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Something usefull
 * @ac: Something more usefull
 * @av: Something more usefull
 *
 * Return: Something much more usefull
 */
char *argstostr(int ac, char **av)
{
	int i, l, j, b = 0;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		l += strlen(av[i]);
	}
	a = malloc(sizeof(char) * l);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			a[b] = av[i][j];
			b++;
		}
		a[b] = '\n';
		b++;
	}
	a[b] = '\0';
	return (a);
}
