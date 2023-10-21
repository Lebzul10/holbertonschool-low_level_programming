#include "stdio.h"
/**
 * main - Something usefull
 *
 * Return: Something much more usefull
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
		{
			putchar(' ');
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", i);
			}
		}
		else
		{
			printf("%d");
		}
	}
	putchar('\n');
	return (0);
}
