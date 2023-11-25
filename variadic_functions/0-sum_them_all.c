#include <stdlib.h>
#include <stdarg.h>
/**
 * print_sign - Something usefull
 * @n: Something more usefull
 *
 * Return: Something much more usefull
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list zor;
	unsigned int i;
	int a = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(zor, n);
	for (i = 0; i < n; i++)
	{
		a = a + va_arg(zor, int);
	}
	va_end(zor);
	return (a);
}
