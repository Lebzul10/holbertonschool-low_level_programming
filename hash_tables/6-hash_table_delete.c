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
	unsigned long int i = 0;
	hash_node_t *zor, *zro;

	while (i < ht->size)
	{
		zro = ht->array[i];
		while (zro != NULL)
		{
			zor = zro;
			zro = zro->next;
			free(zor->key);
			free(zor->value);
			free(zor);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
