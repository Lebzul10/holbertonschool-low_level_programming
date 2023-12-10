#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Something usefull
 * @h: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
