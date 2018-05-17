/*
** EPITECH PROJECT, 2018
** linked_list
** File description:
** add_after
*/

#include <criterion/criterion.h>
#include "linked_list.h"

Test(add_after, basic_comportement)
{
	linked_list_t llist;
	char *test;

	init_list(&llist);
	add_new_first(&llist, "Test");
	add_after(&llist, llist.first, "Test3");
	add_after(&llist, llist.first, "Test2");
	test = (char *) llist.first->next->data;
	cr_assert_str_eq(test, "Test2", "Error add after");
	test = (char *) llist.first->next->next->data;
	cr_assert_str_eq(test, "Test3", "Error add after");
}
