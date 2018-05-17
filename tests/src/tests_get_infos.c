/*
** EPITECH PROJECT, 2018
** linked_list
** File description:
** get_infos
*/

#include <criterion/criterion.h>
#include "linked_list.h"

Test(get_infos, get_node_index)
{
	linked_list_t llist;

	init_list(&llist);
	add_new_first(&llist, "Test");
	add_new_first(&llist, "Test");
	cr_assert_eq(get_node_index(&llist, llist.first->next), 1,
	"Error get node index");
	cr_assert_eq(get_node_index(&llist, llist.first->next->next), 0,
	"Error get node index");
}
