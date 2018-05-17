##
## EPITECH PROJECT, 2018
## linked_list
## File description:
## Makefile
##

CC		:=	gcc

RM		:=	rm -f

SRC_DIR		=	../src

TESTS_DIR	=	src

SRC		=	$(SRC_DIR)/init_list.c		\
			$(SRC_DIR)/add_element.c	\
			$(SRC_DIR)/free_list.c		\
			$(SRC_DIR)/remove_element.c	\
			$(SRC_DIR)/get_infos.c		\
			$(TESTS_DIR)/tests_init_list.c	\
			$(TESTS_DIR)/tests_add_new_first.c	\
			$(TESTS_DIR)/tests_add_new_last.c	\
			$(TESTS_DIR)/tests_add_new_at_index.c	\
			$(TESTS_DIR)/tests_remove_first.c	\
			$(TESTS_DIR)/tests_remove_last.c	\
			$(TESTS_DIR)/tests_get_infos.c

OBJ		=	$(SRC:.c=.o)

CPPFLAGS	+= 	-I../include --coverage

CFLAGS		+=	-Wextra -Wall

LDFLAGS		=	-lcriterion --coverage

NAME		=	../unit-tests

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)
	$(NAME)
clean:
	$(RM) $(SRC_DIR)/*.gc*
	$(RM) $(TESTS_DIR)/*.gc*
	$(RM) ../*.gcov
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: $(NAME) clean fclean re
