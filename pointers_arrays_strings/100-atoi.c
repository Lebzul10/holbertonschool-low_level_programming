#include "main.h"
#include <string.h>
/**
 * _atoi - Something useful
 * @s: Something more useful 214748364
 *
 * Return: Something much more useful
 */
int _atoi(char *s)
{
	int b = 1, i = 0, bl = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num *= 10;
			num += (s[i] - '0');
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
			{
				bl = 1;
			}
			else
			{
				bl = 0;
			}
		}
		if (s[i] == '-')
		{
			b *= -1;
		}
		else if (bl == 0)
		{
			break;
		}
		i++;
	}
	num = num * b;
	return (num);
}
