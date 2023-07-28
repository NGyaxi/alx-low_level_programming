#include <stdio.h>
#include "list.h"

/**
 * print_list - Print all elements of a linked list
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}

	return count;
}

int main(void)
{
	/* Example usage: */
	list_t node3 = { "World", NULL };
	list_t node2 = { "Hello", &node3 };
	list_t node1 = { "Linked", &node2 };
	list_t node0 = { "This", &node1 };
	list_t *head = &node0;

	size_t num_nodes = print_list(head);
	printf("Number of nodes: %zu\n", num_nodes);

	return 0;
}
