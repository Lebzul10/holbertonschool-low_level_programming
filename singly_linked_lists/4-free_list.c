#include <stdlib.h>
#include "main.h"
/**
 * free_list - Something useful
 * @head: Something more useful
 *
 * Return: Something much more useful
 */
void free_list(list_t *head)
{
	list_t *zor;

	zor = head;
	while (head != NULL)
	{
		head = zor;
		zor = head->next;
		free(head->str);
		free(head);
	}
}
