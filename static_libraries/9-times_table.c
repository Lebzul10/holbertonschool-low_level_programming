#include "main.h"
/**
 * times_table - Something usefull
 *
 * Return: Something much more usefull
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = j * i;
			if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (x <= 9 && j > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
