#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Something useful
 * @head: Something more useful
 * @str: Something more useful
 *
 * Return: Something much more useful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *axir, *zor;

	axir = malloc(sizeof(list_t));
	if (axir == NULL)
	{
		return (NULL);
	}
	axir->str = strdup(str);
	axir->len = strlen(str);
	zor = *head;
	while (zor != NULL && zor->next != NULL)
	{
		zor = zor->next;
	}
	if (*head == NULL)
	{
		axir->next = *head;
		*head = axir;
	}
	else
	{
		zor->next = axir;
		axir->next = NULL;
	}
	return (axir);
}
