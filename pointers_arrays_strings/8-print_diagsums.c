#include <stdio.h>
/**
 * print_diagram - Something usefull
 * @a: Something more usefull
 * @size: Something more usefull
 *
 * Return: Something much more usefull
 */
void print_diagsums(int *a, int size)
{
  int i;
  long a = 0, b = 0;

  for (i = 0; i < size; i++)
	{
		a += *(a + (size + 1) * i);
		b += *(a + (size - 1) * (i + 1));
	}
	printf("%ld, %ld\n", a, b);
}
