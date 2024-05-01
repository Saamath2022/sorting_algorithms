#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                       using the Insertion sort algorithm.
 * @list: Double pointer to the head of the linked list
 *
 * Description: The function swaps the nodes themselves to sort the list.
 *              It prints the list after each time two elements are swapped.
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;
	while (current != NULL)
	{
		listint_t *temp = current->prev;

		int value = current->n;

		while (temp != NULL && temp->n > value)
		{
			temp->next->n = temp->n;
			temp->n = value;

			print_list(*list);
			temp = temp->prev;
		}
		current = current->next;
	}
}
