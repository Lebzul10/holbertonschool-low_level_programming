#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - Something usefull
 * @ht: Something more usefull
 * @key: Something more usefull
 *
 * Return: Something much more usefull
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return (NULL);
	}
	i = key_index((unsigned char *)key, ht->size);
	while (ht->array[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
		ht->array[i] = ht->array[i]->next;
	}
	return (ht->array[i]->value);
}
