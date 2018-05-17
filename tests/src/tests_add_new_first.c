/*
** EPITECH PROJECT, 2018
** test linkedlist
** File description:
** test for add_to_front for linkedlist
*/

#include <criterion/criterion.h>
#include "linked_list.h"

Test(add_new_first, empty_list)
{
	linked_list_t llist;
	char *value;

	init_list(&llist);
	add_new_first(&llist, "test");
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "test", "Error add first with empty list");
	value = (char *) llist.last->next->data;
	cr_assert_str_eq(value, "test", "Error add first with empty list");
	value = (char *) llist.last->next->data;
	cr_assert_str_eq(value, "test", "Error add first with empty list");
	value = (char *) llist.last->prev->data;
	cr_assert_str_eq(value, "test", "Error add first with empty list");
	value = (char *) llist.first->next->data;
	cr_assert_str_eq(value, "test", "Error add first with empty list");
	value = (char *) llist.first->prev->data;
	cr_assert_str_eq(value, "test", "Error add first with empty list");
}

Test(add_new_first, filled_list)
{
	linked_list_t llist;
	char *value;

	init_list(&llist);
	add_new_first(&llist, "test");
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "test", "Error add first with filled list");
	add_new_first(&llist, "head");
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "head", "Error add first with filled list");
	value = (char *) llist.first->next->data;
	cr_assert_str_eq(value, "test", "Error add first with filled list");
	value = (char *) llist.first->prev->data;
	cr_assert_str_eq(value, "test", "Error add first with filled list");
}
