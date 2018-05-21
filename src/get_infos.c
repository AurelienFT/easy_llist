/*
** EPITECH PROJECT, 2018
** linked_list
** File description:
** get_infos
*/

#include "linked_list.h"
#include <stdlib.h>

int get_node_index(linked_list_t *llist, node_t *to_find)
{
	int i = 0;
	node_t *search;

	if (llist == NULL || to_find == NULL || llist->first == NULL)
		return (EXIT_ERROR);
	search = llist->first;
	do {
		if (search == to_find)
			return (i);
		i++;
		search = search->next;
	} while (search != llist->first);
	return (EXIT_ERROR);
}

int get_size_llist(linked_list_t *llist)
{
	int i = 0;

	if (llist == NULL || llist->first == NULL)
		return (EXIT_ERROR);
	for (node_t *node = llist->first ; node != llist->last;
	node = node->next, i++);
	return (i + 1);
}

void *get_index_value(linked_list_t *llist, int index)
{
	node_t *node;

	if (llist == NULL || index < 0 || llist->first == NULL)
		return (NULL);
	node = llist->first;
	for (int i = 0; i != index; i++, node = node->next);
	return (node->data);
}
