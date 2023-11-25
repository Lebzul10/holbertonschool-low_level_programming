#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Something usefull
 * @n: Something more usefull
 * @separator: Something more usefull
 *
 * Return: Something much more usefull
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list zor;
	unsigned int i;

	va_start(zor, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(zor, char *) ==  NULL)
		{
			printf("(nil)");
		}
		if (va_arg(zor, char *) != NULL)
		{
			printf("%s", va_arg(zor, char *));
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(zor);
	printf("\n");
}
