#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint -  returns sum of data
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!temp)
		return (0);
	while (temp)
	{
		sum += (*temp).n;
		temp = (*temp).next;
	}
	return (sum);
}
