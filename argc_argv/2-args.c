#include <stdio.h>
/**
 * main - Something useful
 * @argc: Something more useful
 * @argv: Something more useful
 *
 * Return: Something much more useful
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void) argc;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
