#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct list_t - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_t
{
	char *str;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LIST_H */
