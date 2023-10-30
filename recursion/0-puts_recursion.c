#include "main.h"
/**
 * _puts_recursion - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}  
