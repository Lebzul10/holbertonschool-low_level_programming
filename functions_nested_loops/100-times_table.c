#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
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
