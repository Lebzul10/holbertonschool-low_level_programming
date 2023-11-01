#include "main.h"
/**
 * factorial - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
