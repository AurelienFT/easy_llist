/*
** EPITECH PROJECT, 2018
** linked_list
** File description:
** add_element
*/

#include "linked_list.h"
#include <stdlib.h>

int add_new_at_index(linked_list_t *llist, int index, void *data)
{
	node_t *new_node = malloc(sizeof(node_t));
	node_t *n_ind = llist->first;
	int i = 0;

	if (new_node == NULL || n_ind == NULL || index < 0) {
		free(new_node);
		return (EXIT_ERROR);
	}
	for (;n_ind != llist->last && i < index; i++, n_ind = n_ind->next);
	if (n_ind == llist->last && i < index)
		return (EXIT_ERROR);
	if (llist->first == n_ind)
		llist->first = new_node;
	else if (llist->last == n_ind)
		llist->last = new_node;
	new_node->data = data;
	new_node->next = n_ind;
	new_node->prev = n_ind->prev;
	n_ind->prev->next = new_node;
	n_ind->prev = n_ind;
	return (EXIT_SUCCESS);
}

/*
** WIP
*/
int add_after(linked_list_t *llist, node_t *before, void *data)
{
	node_t *new_node = malloc(sizeof(node_t));

	if (new_node == NULL || llist == NULL || before == NULL)
		return (EXIT_ERROR);
	if (before == llist->last)
		return (add_new_last(llist, data));
	return (EXIT_SUCCESS);
}

int add_new_last(linked_list_t *llist, void *data)
{
	node_t *new_node = malloc(sizeof(node_t));

	if (new_node == NULL)
		return (EXIT_ERROR);
	new_node->data = data;
	if (llist->last == NULL) {
		new_node->next = new_node;
		new_node->prev = new_node;
		llist->first = new_node;
		llist->last = new_node;
	} else {
		new_node->next = llist->first;
		new_node->prev = llist->last;
		llist->last->next = new_node;
		llist->first->prev = new_node;
		llist->last = new_node;
	}
	return (EXIT_SUCCESS);
}

int add_new_first(linked_list_t *llist, void *data)
{
	node_t *new_node = malloc(sizeof(node_t));

	if (new_node == NULL)
		return (EXIT_ERROR);
	new_node->data = data;
	if (llist->first == NULL) {
		new_node->next = new_node;
		new_node->prev = new_node;
		llist->first = new_node;
		llist->last = new_node;
	} else {
		new_node->next = llist->first;
		new_node->prev = llist->last;
		llist->first->prev = new_node;
		llist->last->next = new_node;
		llist->first = new_node;
	}
	return (EXIT_SUCCESS);
}
