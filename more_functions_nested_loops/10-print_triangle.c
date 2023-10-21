#include "main.h"
/**
 * print_triangle - Something usefull
 * @size: Something more usefull
 *
 * Return: Something much more usefull
 */
void print_triangle(int size)
{
	int i, n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			for (i = 1; i <= n; i++)
			{
				_putchar(' ');
			}
			for (i = 1; i <= size - n; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
