#ifndef LIST_h
#define LIST_h

#include <stddef.h>
/**
 * struct hoqqa - Something usefull
 * @str: Something more usefull
 * @len: Something more usefull
 * @next: Something more usefull
 *
 */
typedef struct hoqqa
{
	char *str;
	unsigned int len;
	struct hoqqa *next;
} list_t;

size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif
