#include <stdio.h>
/**
 * main - Something usefull
 *
 * Return: Something much more usefull
 */
int main(void)
{
	long a = 0;
	long b = 1;
	long s = 0;

	while (a <= 2000000 && b <= 2000000)
	{
		a = a + b;
		b = b + a;
		if (a % 2 == 0)
		{
			s = s + a;
		}
		if (b % 2 == 0)
		{
			s = s + b;
		}
	}
	printf("%ld\n", s);
	return (0);
}
