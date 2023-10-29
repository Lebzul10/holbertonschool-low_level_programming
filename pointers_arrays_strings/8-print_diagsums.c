#include <stdio.h>
/**
 * print_diagsums - Something usefull
 * @a: Something more usefull
 * @size: Something more usefull
 *
 * Return: Something much more usefull
 */
void print_diagsums(int *a, int size)
{
	int i;
	long c = 0, b = 0;

	for (i = 0; i < size; i++)
	{
		c += *(a + (size + 1) * i);
		b += *(a + (size - 1) * (i + 1));
	}
	printf("%ld, %ld\n", c, b);
}
