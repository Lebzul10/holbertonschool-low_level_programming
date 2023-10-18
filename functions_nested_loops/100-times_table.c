#include "main.h"
/**
 * print_times_table - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
void times_hesen(int i, int j)
{
	int x = j * i;

	if (x >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(x / 100 + '0');
		_putchar((x / 10) % 10 + '0');
		_putchar(x % 10 + '0');
	}
	else if (x >= 10 && x <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
	}
	else if (x <= 9 && j > 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(x + '0');
	}
	else
	{
		_putchar(x + '0');
	}
}
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times_hesen(i, j);
			}
			_putchar('\n');
		}
	}
}
