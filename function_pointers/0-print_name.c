#include <stdlib.h>
/**
 * print_name - Something useful
 * @name: Something more useful
 * @f: Something more useful
 *
 * Return: Something much more useful
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
