/*
** EPITECH PROJECT, 2018
** unit test for linked list
** File description:
** test add new last
*/

#include "linked_list.h"
#include <criterion/criterion.h>

Test(add_new_last, empty_list)
{
	linked_list_t llist;
	char *value;

	init_list(&llist);
	add_new_last(&llist, "test");
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "test", "Error add last with empty list");
	value = (char *) llist.last->next->data;
	cr_assert_str_eq(value, "test", "Error add last with empty list");
	value = (char *) llist.last->next->data;
	cr_assert_str_eq(value, "test", "Error add last with empty list");
	value = (char *) llist.last->prev->data;
	cr_assert_str_eq(value, "test", "Error add last with empty list");
	value = (char *) llist.first->next->data;
	cr_assert_str_eq(value, "test", "Error add last with empty list");
	value = (char *) llist.first->prev->data;
	cr_assert_str_eq(value, "test", "Error add last with empty list");
}

Test(add_new_last, filled_list)
{
	linked_list_t llist;
	char *value;

	init_list(&llist);
	add_new_last(&llist, "test");
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "test", "Error add last with filled list");
	add_new_last(&llist, "head");
	value = (char *) llist.first->data;
	cr_assert_str_eq(value, "test", "Error add last with filled list");
	value = (char *) llist.first->next->data;
	cr_assert_str_eq(value, "head", "Error add last with filled list");
	value = (char *) llist.first->prev->data;
	cr_assert_str_eq(value, "head", "Error add last with filled list");
}

