#include "main.h"
/**
 * leet - Something usefull
 * @s: Something more usefull
 *
 * Return: Something much more usefull
 */
char *leet(char *s)
{
	int i = 0, j, a;
	char b[] = "aeotl";
	char B[] = "AEOTL";
	char n[] = "43071";

	while (*(s + i) != '\0')
	{
		a = *(s + i);
		for (j = 0; j <= 4; j++)
		{
			if (a == b[j] || a == B[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
