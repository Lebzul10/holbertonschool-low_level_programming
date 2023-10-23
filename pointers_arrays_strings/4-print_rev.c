#include "main.h"
/**
 * print_rev - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	s--;
	for (; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
