#ifndef MY_LISTS_H
#define MY_LISTS_H

#include <stdlib.h>

typedef struct my_listint_s
{
    int data;
    struct my_listint_s *next;
} my_listint_t;

my_listint_t *create_node(int data);
void append_node(my_listint_t **head, int data);
void print_list(const my_listint_t *head);
void free_list(my_listint_t *head);
int has_cycle(const my_listint_t *head);

#endif /* MY_LISTS_H */
