#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - Something usefull
 * @ht: Something more usefull
 *
 * Return: Something much more usefull
 */
void hash_table_delete(hash_table_t *ht)
{
	int i = 0;
	hash_node_t *zor;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			zor = ht->array[i];
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			free(zor);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
