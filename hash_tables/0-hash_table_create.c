#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - Something usefull
 * @size: Something more usefull
 *
 * Return: Something much more usefull
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *zor;

	zor = malloc(sizeof(hash_table_t));
	if (zor == NULL)
	{
		return (NULL);
	}
	zor->size = size;
	zor->array = calloc(size, sizeof(hash_node_t *));
	return (zor);
}
