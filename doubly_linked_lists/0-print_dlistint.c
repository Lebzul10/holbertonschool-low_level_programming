#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Something usefull
 * @h: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int a = 0;

	while (h != NULL)
	{
		h = h->next;
		printf("%d\n", h->n);
		a++;
	}
	return (a);
}
