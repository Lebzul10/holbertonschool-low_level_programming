#include "main.h"
/**
 * _pow_recursion - Something useful
 * @x: Something more useful
 * @y: Something more useful
 *
 * Return: Something much more useful
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
