#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Something useful
 * @i: Something more useful
 *
 * Return: Something much more useful
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
	  h = h->next;
	  i++;
	}
	return (i);
}
