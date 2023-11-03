#include "main.h"
/**
 * puts2 - Something useful
 * @str: Something more useful
 *
 * Return: Something much more useful
 */
void puts2(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		a++;
	}
	_putchar('\n');
}
