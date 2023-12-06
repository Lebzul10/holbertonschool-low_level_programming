#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Something usefull
 * @h: Something more usefull
 *
 * Return: Something much more usefull
 */
size_t print_list(const list_t *h)
{
	unsigned int a;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->n, h->str);
		}
		h = h->next;
		a++;
	}
	return (a);
}
