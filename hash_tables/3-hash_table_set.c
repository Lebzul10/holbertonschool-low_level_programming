#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - Something usefull
 * @ht: Something more usefull
 * @key: Something more usefull
 * @value: Something more usefull
 *
 * Return: Something much more usefull
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *zor, *zro;

	if (ht == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	zor = malloc(sizeof(hash_node_t));
	if (zor == NULL)
	{
		return (0);
	}
	zor->key = strdup(key);
	zor->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = zor;
		zor->next = NULL;
	}
	else
	{
		zro = ht->array[index];
		while (ht->array[index] != NULL)
		{
			if (strcmp(ht->array[index]->key, key) == 0)
			{
				ht->array[index]->value = strdup(value);
				return (1);
			}
			ht->array[index] = ht->array[index]->next;
		}
		zor->next = zro;
		zro = zor;
	}
	return (1);
}
