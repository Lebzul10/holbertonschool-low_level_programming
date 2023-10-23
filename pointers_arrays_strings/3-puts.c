#include "main.h"
/**
 * _puts - Something useful
 * @str: Something more useful
 *
 * Return: Something much more useful
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
