#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - Something usefull
 * @n: Something more usefull
 * @head: Something more usefull
 *
 * Return: Something much more usefull
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *zor, *hoqqa;

	zor = malloc(sizeof(dlistint_t));
	if (zor == NULL)
	{
		return (NULL);
	}
	hoqqa = *head;
	zor->n = n;
	zor->next = NULL;
	while (hoqqa != NULL && hoqqa->next != NULL)
	{
		hoqqa = hoqqa->next;
	}
	if (*head == NULL)
	{
		zor->prev = NULL;
		*head = zor;
	}
	else
	{
		zor->prev = hoqqa;
		hoqqa->next = zor;
	}
	return (zor);
}
