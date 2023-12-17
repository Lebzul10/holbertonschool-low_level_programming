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
	while (ht->array[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
		ht->array[i] = ht->array[i]->next;
	}
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
		zor->next = zro;
		ht->array[index] = zor;
	}
	return (1);
}
