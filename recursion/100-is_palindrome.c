#include "main.h"
#include <string.h>
/**
 * is_pal - Something useful
 * @s: Something more useful
 * @i: Something more useful
 *
 * Return: Something much more useful
 */
int is_pal(char *s, int i)
{
	int l = strlen(s);

	if (*(s + i) == *(s + l - i - 1) && i < (l + 1) / 2)
	{
		return (is_pal(s, i + 1));
	}
	else if (*(s + i) == *(s + l - i - 1) && i == (l + 1) / 2)
	{
		return (1);
	}
	return (0);
}
/**
 * is_palindrome - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
int is_palindrome(char *s)
{
	return (is_pal(s, 0));
}
