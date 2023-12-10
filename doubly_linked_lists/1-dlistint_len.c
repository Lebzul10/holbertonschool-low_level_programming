#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Something usefull
 * @h: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
