#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - Something usefull
 * @n: Something more usefull
 * @separator: Something more usefull
 *
 * Return: Something much more usefull
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list zor;
	unsigned int i;

	va_start(zor, n);
	for (i = 0; i < n; i++)
	  {
		printf("%d", va_arg(zor, int));
		if (separator != NULL)
		  {
			printf("%s", separator);
		  }
	  }
	va_end(zor);
	printf("\n");
}
