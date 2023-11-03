#include <stdio.h>
#include <stdlib.h>
/**
 * main - Something useful
 * @argc: Something more useful
 * @argv: Something more useful
 *
 * Return: Something much more useful
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
