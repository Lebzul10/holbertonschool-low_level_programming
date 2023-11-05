#include <stdio.h>
#include <stdlib.h>
/**
 * main - Something usefull
 * @argc: Something more usefull
 * @argv: Something more usefull
 *
 * Return: Something much more usefull
 */
int main(int argc, char *argv[])
{
	int coin[] = {25, 10, 5, 2, 1};
	int a, i = 0, c = 0;

	a = atoi(argv[1]);
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	while (a > 0)
	{
		if (a - coin[i] < 0)
		{
			i++;
		}
		else if (a - coin[i] >= 0)
		{
			a = a - coin[i];
			c++;
		}
	}
	printf("%d\n", c);
	return (0);
}
