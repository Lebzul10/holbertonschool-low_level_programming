#include "main.h"
/**
 * more_numbers - Something usefull
 *
 * Return: Something much more usefull
 */
void more_numbers(void)
{
	int i, a = 0;

	while (a < 14)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		a++;
	}
}
