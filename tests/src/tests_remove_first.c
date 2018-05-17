/*
** EPITECH PROJECT, 2018
** tests linked list
** File description:
** test remove first
*/

#include "linked_list.h"
#include <criterion/criterion.h>

Test(remove_first, empty_list)
{
	linked_list_t llist;

	init_list(&llist);
	remove_first(&llist);
	cr_assert_null(llist.first, "Error remove_first with empty list");
}

Test(remove_first, first_equal_last)
{
	linked_list_t llist;

	init_list(&llist);
	add_new_first(&llist, "test");
	remove_first(&llist);
	cr_assert_null(llist.first, "Error remove_first first equal last");
	cr_assert_null(llist.last, "Error remove_first first equal last");
}

Test(remove_first, filled_list)
{
	linked_list_t llist;
	char *value;

	init_list(&llist);
	add_new_first(&llist, "test");
	add_new_first(&llist, "head");
	remove_first(&llist);
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "test", "Error remove_first filled list");
}
