#include <stdlib.h>
/**
 * reset_to_98 - Something useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
char *_strdup(char *str)
{
  int i = 0, len;
  char *a;

  if (str == NULL)
	{
	  return (NULL);
	}
  len = strlen(str);
  arr = malloc(len * sizeof(char));
  if (a == NULL)
	{
	  return NULL;
	}
  while (len > 0)
	{
	  a[i] = str[i];
	  i++;
	  len--;
	}
  return (a);
}
