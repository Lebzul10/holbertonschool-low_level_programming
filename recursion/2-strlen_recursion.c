#include "main.h"
/**
 * _strlen_recursion - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
