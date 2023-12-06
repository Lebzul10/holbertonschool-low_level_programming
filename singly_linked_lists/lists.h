#ifndef LIST_h
#define LIST_h

#include <stddef.h>
/**
 * hoqqa - Something usefull
 * @str: Something more usefull
 * @n: Something more usefull
 * @next: Something more usefull
 *
 */
typedef struct hoqqa
{
	char *str;
	unsigned int n;
	struct hoqqa *next;
} list_t;

size_t print_list(const list_t *h);

#endif
