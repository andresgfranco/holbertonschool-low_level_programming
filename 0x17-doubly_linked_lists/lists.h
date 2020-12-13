#ifndef DOUBLY_LINKED_LISTS_H
#define DOUBLY_LINKED_LISTS_H

/** Libraries **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;


/** PROTOTYPES **/
size_t print_dlistint(const dlistint_t *h);

#endif