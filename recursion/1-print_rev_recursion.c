#include "main.h"
/**
 * _print_rev_recursion - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
