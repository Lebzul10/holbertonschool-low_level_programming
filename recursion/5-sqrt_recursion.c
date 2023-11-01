#include "main.h"
/**
 * _sqrt - Something useful
 * @a: Something more useful
 * @b: Something more useful
 *
 * Return: Something much more useful
 */
int _sqrt(int a, int b)
{
	if (a * a < b)
	{
		return (_sqrt(a + 1, b));
	}
	else if(a * a > b)
	{
		return (-1);	
	}
	else
	{
		return (a);
	}
}
/**
 * _sqrt_recursion - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(0, n));
}
