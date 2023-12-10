#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Something usefull
 * @head: Something more usefull
 *
 * Return: Something much more usefull
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *zor;

	while (head != NULL)
	{
		zor = head;
		head = head->next;
		free(zor);
	}
	free(head);
}
