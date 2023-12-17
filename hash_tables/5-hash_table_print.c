#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - Something usefull
 * @ht: Something more usefull
 *
 * Return: Something much more usefull
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, size, zor;

	if (ht == NULL)
	{
		return;
	}
	size = ht->size;
	printf("{");
	while (i < size)
	{
		while (ht->array[i] != NULL)
		{
			zor = printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL)
			{
				printf(", ");
			}
			ht->array[i] = ht->array[i]->next;
		}
		if (i + 1 != size && ht->array[i + 1] != NULL && zor > 0)
		{
			printf(", ");
		}
		i++;
	}
	printf("}\n");
}
