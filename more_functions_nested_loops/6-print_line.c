#include "main.h"
/**
 * print_line - Something usefull
 * @n: Something more usefull
 *
 * Return: Something much more usefull
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while(n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
