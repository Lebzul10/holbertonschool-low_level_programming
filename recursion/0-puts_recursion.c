#include "main.h"
/**
 * _print_recursion - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
void _print_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}  
