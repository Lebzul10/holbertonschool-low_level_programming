#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - Something usefull
 * @n: Something more usefull
 * @head: Something more usefull
 *
 * Return: Something much more usefull
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *zor;

	zor = malloc(sizeof(dlistint_t));
	if (zor == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		(*head)->prev = zor;
	}
	zor->prev = NULL;
	zor->next = *head;
	zor->n = n;
	*head = zor;
	return (zor);
}
