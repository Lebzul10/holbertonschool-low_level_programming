#ifndef LIST_h
#define LIST_h

#include <stddef.h>
struct hoqqa
{
	char *str
	unsigned long int n;
	struct hoqqa *next;
} list_t;

size_t print_list(const list_t *h);

#endif
