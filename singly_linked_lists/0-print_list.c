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
	unsigned long int a;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			prntf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
		a++;
	}
	return (a);
}
