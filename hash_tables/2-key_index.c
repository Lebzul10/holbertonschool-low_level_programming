#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - Something usefull
 * @key: Something more usefull
 * @size: Something more usefull
 *
 * Return: Something much more usefull
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int zor, index;

	zor = hash_djb2((unsigned char *)key);
	index = zor % size;
	return (index);
}
