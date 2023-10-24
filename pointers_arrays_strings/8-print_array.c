#include "main.h"
#include <string.h>
/**
 * print_array - Something useful
 * @n: Something more useful
 * @a: Something more useful
 *
 * Return - Something much more useful
 */
void print_array(int *a, int n)
{
	int i;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		printf("%d", *(a + i));
		if (i < n)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
