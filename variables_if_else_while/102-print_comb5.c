#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (n = '0'; n <= '9'; n++)
				{
					if (i < k || ((i + j) < (k + n) && i <= k))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(n);
						if (i != '9' || j != '8')
						{
							putchar(',');
							putchar(' ');
						}
						
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
