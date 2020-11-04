#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
**/
typedef struct listint_s
{
	    int n;
	    struct listint_s *next;
} listint_t;



/** Prototypes **/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
