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
	int i = 0;

	if (ht == NULL)
	  {
		return;
	  }
	printf("{");
	while (i < 6)
	{
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
			i++;
	}
	printf("}");
}
