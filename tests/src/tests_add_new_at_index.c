/*
** EPITECH PROJECT, 2018
** linked list test
** File description:
** add element at index
*/

#include <criterion/criterion.h>
#include "linked_list.h"

Test(add_at_index, errors)
{
	linked_list_t llist;

	init_list(&llist);
	cr_assert_eq(add_new_at_index(&llist, 0, "test"), EXIT_ERROR, "Erorr"
	" new_at_index with empty list");
	cr_assert_eq(add_new_at_index(&llist, -1, "test"), EXIT_ERROR, "Erorr"
	" new_at_index with empty list");
	add_new_first(&llist, "head");
	cr_assert_eq(add_new_at_index(&llist, 2, "test"), EXIT_ERROR, "Erorr"
	" new_at_index with empty list");
}

Test(add_at_index, first_equal_last)
{
	linked_list_t llist;
	char *value;

	init_list(&llist);
	add_new_first(&llist, "test");
	add_new_at_index(&llist, 0, "head");
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "head", "error new_at_index"
	" with first equal last");
	value = (char *) llist.first->next->data;
	cr_assert_str_eq(value, "test", "error new_at_index"
	" with first equal last");
	value = (char *) llist.first->prev->data;
	cr_assert_str_eq(value, "test", "error new_at_index"
	" with first equal last");
}

Test(add_at_index, filled_list)
{
	linked_list_t llist;
	char *value;

	init_list(&llist);
	add_new_first(&llist, "Last");
	add_new_first(&llist, "Third");
	add_new_first(&llist, "First");
	add_new_at_index(&llist, 1, "Second");
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "First", "Error add index with filled list");
	value = (char *) llist.first->next->data;
	cr_assert_str_eq(value, "Second", "Error add index with filled list");
	value = (char *) llist.first->next->next->data;
	cr_assert_str_eq(value, "Third", "Error add index with filled list");
	value = (char *) llist.last->data;
	cr_assert_str_eq(value, "Last", "Error add index with filled list");
	value = (char *) llist.last->prev->data;
	cr_assert_str_eq(value, "Third", "Error add index with filled list");
	value = (char *) llist.last->next->data;
	cr_assert_str_eq(value, "First", "Error add index with filled list");
}
