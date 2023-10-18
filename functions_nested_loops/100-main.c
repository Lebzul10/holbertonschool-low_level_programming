#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
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


int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}
