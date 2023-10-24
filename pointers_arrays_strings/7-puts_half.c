#include "main.h"
#include <string.h>
/**
 * puts_half - Something useful
 * @str: Something more useful
 *
 * Return: Something much more useful
 */
void puts_half(char *str)
{
	int a = 0, c;

	a = strlen(str);
	if (a % 2 == 0)
	{
		for (c = a / 2; c < a; c++)
		{
			_putchar(*(str + c));
		}
	}
	else if (a % 2 == 1)
    {
        for (c = a / 2 + 1; c < a; c++)
        {
            _putchar(*(str + c));
        }
    }
	_putchar('\n');
}
