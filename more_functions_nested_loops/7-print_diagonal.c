#include "main.h"
/**
 * print_diagonal - Something usefull
 * @n: Something more usefull
 *
 * Return: Something much more usefull
 */
void print_diagonal(int n)
{
	int i, a = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		while (a < n)
		{
			for (i = 1; i <= a; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			a++;
		}
		_putchar('\n');
	}
}
