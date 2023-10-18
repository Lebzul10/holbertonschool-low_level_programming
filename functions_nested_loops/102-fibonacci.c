#include <stdio.h>
/**
 * main - Something usefull
 *
 * Return: Something much more usefull
 */
int main(void)
{
	int i = 0;
	long a = 0;
	long b = 1;

	while (i <= 24)
	{
		a = a + b;
		b = b + a;
		if (i == 24)
		{
			printf("%ld, %ld", a, b);
		}
		else
		{
			printf("%ld, %ld, ", a, b);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
