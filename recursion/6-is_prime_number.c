#include "main.h"
/**
 * _prime - Something useful
 * @a: Something more useful
 * @b: Something more useful
 *
 * Return: Something much more useful
 */
int _prime(int a, int b)
{
	if (a % b != 0 && b < a)
	{
		return (_prime(a, b + 1));
	}
	else if ((a % b == 0 && b < a) || a <= 1)
	{
		return (0);
	}
	return (1);
}
/**
 * is_prime_number - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
