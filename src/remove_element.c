/*
** EPITECH PROJECT, 2018
** linked_list lib
** File description:
** remove a element of linked list
*/

#include "linked_list.h"
#include <stdlib.h>

int remove_last(linked_list_t *llist)
{
	node_t *new_last;

	if (llist->last == NULL)
		return (EXIT_ERROR);
	if (llist->last == llist->first) {
		free(llist->last);
		init_list(llist);
		return (EXIT_SUCCESS);
	}
	new_last = llist->last->next;
	llist->last->prev->next = new_last;
	new_last->prev = llist->last->prev;
	free(llist->last);
	llist->first = new_last;
	return (EXIT_ERROR);
}

int remove_one(linked_list_t *llist, node_t *node_to_suppress)
{
	if (node_to_suppress == llist->first)
		return (remove_first(llist));
	if (node_to_suppress == llist->last)
		return (remove_last(llist));
	node_to_suppress->prev->next = node_to_suppress->next;
	node_to_suppress->next->prev = node_to_suppress->prev;
	if (node_to_suppress != NULL)
		free(node_to_suppress);
	return (EXIT_SUCCESS);
}

int remove_first(linked_list_t *llist)
{
	node_t *new_first;

	if (llist->first == NULL)
		return (EXIT_ERROR);
	if (llist->first == llist->last) {
		free(llist->first);
		init_list(llist);
		return (EXIT_SUCCESS);
	}
	new_first = llist->first->next;
	llist->first->prev->next = new_first;
	new_first->prev = llist->first->prev;
	free(llist->first);
	llist->first = new_first;
	return (EXIT_SUCCESS);
}
