/*
** EPITECH PROJECT, 2018
** linked_list
** File description:
** include
*/

static const int EXIT_ERROR = 0;

typedef struct node_s {
	void *data;
	struct node_s *prev;
	struct node_s *next;
} node_t;

typedef struct linked_list_s {
	struct node_s *first;
	struct node_s *last;
} linked_list_t;

void init_list(linked_list_t *);
int add_new_first(linked_list_t *, void *);
int add_new_last(linked_list_t *, void *);
void free_list(linked_list_t *);
int remove_first(linked_list_t *);
int remove_last(linked_list_t *);
int add_new_at_index(linked_list_t *, int, void *);
int remove_one(linked_list_t *, node_t *);
int add_after(linked_list_t *, node_t *, void *);
