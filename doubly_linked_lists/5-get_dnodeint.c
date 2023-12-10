#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns n-th node
 * @head: head
 * @index: index
 * Return: node by index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (!temp)
		return (NULL);
	while (temp)
	{
		if (n == index)
			return (temp);
		temp = (*temp).next, n++;
	}
	return (NULL);
}
