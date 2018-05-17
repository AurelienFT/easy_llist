/*
** EPITECH PROJECT, 2018
** test linked list
** File description:
** test for init_list
*/

#include "linked_list.h"
#include <criterion/criterion.h>

Test(init_list, worked)
{
	linked_list_t llist;

	init_list(&llist);
	cr_assert_null(llist.first, "First node of linked list not null");
	cr_assert_null(llist.last, "Last node of linked list not null");
}
