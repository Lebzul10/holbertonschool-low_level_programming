#include "main.h"
#include <stdio.h>

void times_hesen(int i, int j)
{
int x = j * i;
                if (x >= 100)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(x / 100 + '0');
                    _putchar((x / 10) % 10 + '0');
                    _putchar(x % 10 + '0');
                }
                else if (x >= 10 && x <= 99)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(x / 10 + '0');
                    _putchar(x % 10 + '0');
                }
                else if (x <= 9 && j > 0)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(x + '0');
                }
                else
                {
                    _putchar(x + '0');
                }
}
