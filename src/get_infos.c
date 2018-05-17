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
	node_t *search = llist->first;

	if (llist == NULL || to_find == NULL)
		return (EXIT_ERROR);
	do {
		if (search == to_find)
			return (i);
		i++;
		search = search->next;
	} while (search != llist->first);
	return (EXIT_ERROR);
}
