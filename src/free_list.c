/*
** EPITECH PROJECT, 2018
** linked list 
** File description:
** free
*/

#include "linked_list.h"
#include <stdlib.h>

void free_list(linked_list_t *llist)
{
	node_t *actual = llist->first->next;

	while (actual != llist->last) {
		free(actual->prev);
		actual = actual->next;	
	}
	free(actual->prev);
	free(actual);
}
