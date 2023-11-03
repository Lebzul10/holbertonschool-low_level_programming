#include <stdio.h>
/**
 * main - Something usefull
 *
 * Return: Something much more usefull
 */
int main(void)
{
	unsigned long int b = 0, i = 2, a = 612852475143;

	while (a != 1)
	{
		if (a % i == 0)
		{
			a = a / i;
			if (i > b)
			{
				b = i;
			}
		}
		i++;
	}
	printf("%lu\n", b);
	return (0);
}
