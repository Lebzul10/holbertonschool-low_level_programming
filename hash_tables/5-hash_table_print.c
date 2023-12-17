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
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size;

	if (ht == NULL)
	  {
		return;
	  }
	size = ht->size;
	printf("{");
	while (size != 0)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
			size--;
		}
		i++;
	}
	printf("}");
}
