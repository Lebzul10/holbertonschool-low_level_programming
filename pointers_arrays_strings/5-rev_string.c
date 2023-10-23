#include "main.h"
/**
 * rev_string - Something useful
 * @s: Something more useful
 *
 * Return: Something much more useful
 */
void rev_string(char *s)
{
	int a = 0;
	char *b;

	while (*s != '\0')
	{
		*b = *s;
		b++;
		s++;
		a++;
	}
	s--;
	for (; a > 0; a--)
	{
		*s = *(b - a);
		s--;
	} 
}
