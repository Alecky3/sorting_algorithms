
#include "sort.h"

/**
 * swap_node - swaps two nodes in a doubly-linked list
 * @a: pointer to first node
 * @b: pointer to second node
 * Return: void
 */
void swap_node(listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;

}

