#include <stdlib.h>
#include <stdio.h>
/**
 * inan - Something usefull
 * @s: Something more usefull
 *
 * Return: Something much more usefull
 */
int inan(char *s)
{
	if (*s >= '0' && *s <= '9')
	{
		return (inan(s + 1));
	}
	else if (*s == '\0')
	{
		return (1);
	}
	return (0);
}
/**
 * main - Something usefull
 * @argc: Something more usefull
 * @argv: Something more usefull
 *
 * Return: Something much more usefull
 */
int main(int argc, char *argv[])
{
	int i = 1, a, sum = 0;

	while (argv[i] != NULL)
	{
		if (argc == 1)
		{
			return (0);
		}
		if (inan(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			a = atoi(argv[i]);
			sum += a;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
