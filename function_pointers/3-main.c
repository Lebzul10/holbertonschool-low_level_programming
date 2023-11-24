#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
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
	char *c = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((*c != '+' && *c != '-' && *c != '*' && *c != '/' && *c != '%') || strlen(c) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*c == '/' || *c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c)(a, b));
	return (0);
}
