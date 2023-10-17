#include "main.h"
/**
 * print_sign - Something usefull
 * @n: Something more usefull
 *
 * Return: Something much more usefull
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
