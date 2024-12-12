#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: a poiter to the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *list_bis;
	listint_t *swap;

	if (list == NULL || (*list)->next == NULL)
	{
		return;
	}

	list_bis = (*list)->next;

	while (list_bis != NULL)
	{
		swap = list_bis->next;
		while (list_bis->prev != NULL && list_bis->prev->n > list_bis->n)
		{
			list_bis->prev->next = list_bis->next;
			if (list_bis->next != NULL)
			{
				list_bis->next->prev = list_bis->prev;
			}
			list_bis->next = list_bis->prev;
			list_bis->prev = list_bis->next->prev;
			list_bis->next->prev = list_bis;
			if (list_bis->prev != NULL)
			{
				list_bis->prev->next = list_bis;
			}
			else
			{
				*list = list_bis;
			}
			print_list(*list);
		}
		list_bis = swap;
	}



}
