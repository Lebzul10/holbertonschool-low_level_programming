#include "main.h"
/**
 * reverse_array - Something useful
 * @n: Something more useful
 * @a: Something more useful
 *
 * Return: Something much more useful
 */
void reverse_array(int *a, int n)
{
	int i = 0, b;

	n = n - 1;
	while (i <= n / 2)
	{
		b = *(a + (n - i));
		*(a + (n - i)) = *(a + i);
		*(a + i) = b;
		i++;
	}
}
