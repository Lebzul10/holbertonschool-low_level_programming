#include <stdio.h>
/**
 * main - Something usefull
 *
 * Return: Something much more usefull
 */
int main(void)
{
  int i = 0;
  int s = 0;
  
  while (i < 1024)
	{
	  if (i % 3 == 0 || i % 5 == 0)
		{
		  s = s + i;
		}
	  i++;
	}
  printf("%d\n", s);
}
