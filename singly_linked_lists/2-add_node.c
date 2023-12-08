#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Something useful
 * @head: Something more useful
 * @str: Something more useful
 *
 * Return: Something much more useful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *bas;

	bas = malloc(sizeof(list_t));
	if (bas == NULL)
	{
		return (NULL);
	}
	bas->str = strdup(str);
	bas->len = strlen(str);
	bas->next = *head;
	*head = bas;
	return (bas);
}
