#include <stdio.h>
#include "sort.h"


/**
 * swap_node - Swap  the doubly-linked list
 * @head: the head of the doubly-linked list
 * @n1: The first node to swap
 * @n2: The second  node to swap
 */
void swap_node(listint_t **head, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*head = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}


/**
 * insertion_sort_list - insertion_sort_list
 *
 * @list: The doubly-linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
listint_t *iter, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = temp)
	{
		temp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_node(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
