/*
** EPITECH PROJECT, 2018
** tests linked lit
** File description:
** test remove last
*/

#include "linked_list.h"
#include <criterion/criterion.h>

Test(remove_last, empty_list)
{
	linked_list_t llist;

	init_list(&llist);
	remove_last(&llist);
	cr_assert_null(llist.first, "Error remove last with empty list");
	cr_assert_null(llist.last, "Error remove last with empty list");
}

Test(remove_last, first_equal_last)
{
	linked_list_t llist;

	init_list(&llist);
	add_new_last(&llist, "test");
	remove_last(&llist);
	cr_assert_null(llist.first, "Error remove_first first equal last");
	cr_assert_null(llist.last, "Error remove_first first equal last");
}

Test(remove_last, filled_list)
{
	linked_list_t llist;
	char *value;

	init_list(&llist);
	add_new_last(&llist, "test");
	add_new_last(&llist, "head");
	remove_last(&llist);
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "test", "Error remove_first filled list");
}
