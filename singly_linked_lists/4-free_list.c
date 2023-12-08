#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Something useful
 * @head: Something more useful
 *
 * Return: Something much more useful
 */
void free_list(list_t *head)
{
	list_t *zor;

	while (zor != NULL)
	{
		zor = head;
		head = head->next;
		free(zor->str);
		free(zor);
	}
	free(head);
}
