#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * print_sign - Something usefull
 * @n: Something more usefull
 *
 * Return: Something much more usefull
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	i = key_index((unsigned char *)key);
	return (ht->array[i]->value);
}
