/*
** EPITECH PROJECT, 2018
** linked_list
** File description:
** init_list
*/

#include "linked_list.h"
#include <stdlib.h>

void init_list(linked_list_t *llist)
{
	llist->first = NULL;
	llist->last = NULL;
}
