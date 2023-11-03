#include "main.h"
/**
 * cap_string - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
char *cap_string(char *s)
{
	int a, b, i = 0;

	while (*(s + i) != '\0')
	{
		a = *(s + i - 1);
		b = *(s + i);
		if (i == 0 && b >= 'a' && b <= 'z')
		{
			*(s + i) = b - ' ';
		}
		if ((a == '(' || a == ')' || a == '{' || a == '}') && b >= 'a' && b <= 'z')
		{
			*(s + i) = b - ' ';
		}
		if ((a == ' ' || a == '!' || a == '?' || a == '"') && b >= 'a' && b <= 'z')
		{
			*(s + i) = b - ' ';
		}
		if ((a == '\n' || a == ',' || a == ';' || a == '.') && b >= 'a' && b <= 'z')
		{
			*(s + i) = b - ' ';
		}
		if ((a == 11 || a == 9) && b >= 'a' && b <= 'z')
		{
			*(s + i) = b - ' ';
		}
		i++;
	}
	return (s);
}
