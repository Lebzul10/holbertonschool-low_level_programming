#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_sign - Something usefull
 * @n: Something more usefull
 *
 * Return: Something much more usefull
 */
int main(int argc, char **argv)
{
  int i = 0, j = 0, l1, l2;
  int *a, *b;

  if (argc != 3)
	{
	  printf("Error\n");
	  exit(98);
	}
  l1 = strlen(argv[1]);
  l2 = strlen(argv[2]);
  a = malloc(sizeof(int) * l1);
  b = malloc(sizeof(int) * l2);
  while (i < l1)
	{
	  a[i] = atoi(argv[1][i]);
	  i++;
	}
  printf("%d\n", a[2]);
  return (0);
}
