#include "sort.h"
/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending
* order using the 'Insertion sort' algorithm
* @list: pointer to pointer to the head of the list
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	int i;

	if (!list)
		return;
	current = *list;
	while (current)
	{
		while (current)
		{
			if (current->next)
			{
				if (current->n > current->next->n)
				{
					i = current->n;
					*(int *)&current->n = current->next->n;
					*(int *)&current->next->n = i;
					current = *list;
					print_list(*list);
					break;
				}
			}
			current = current->next;
		}
	}
}
