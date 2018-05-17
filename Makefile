##
## EPITECH PROJECT, 2018
## linked_list
## File description:
## Makefile
##

CC	:=	gcc

RM	:=	rm -f

SRC_DIR	=	src

SRC	=	$(SRC_DIR)/init_list.c		\
		$(SRC_DIR)/add_element.c	\
		$(SRC_DIR)/free_list.c		\
		$(SRC_DIR)/remove_element.c	\
		$(SRC_DIR)/get_infos.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I./include -Wextra -Wall

NAME	=	libllist.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

tests_run:
	make -C tests/

clean:
	$(RM) $(OBJ)
	make -C tests/ clean

fclean:	clean
	$(RM) $(NAME)
	make -C tests/ fclean

re:	fclean all

.PHONY: $(NAME) clean fclean re
