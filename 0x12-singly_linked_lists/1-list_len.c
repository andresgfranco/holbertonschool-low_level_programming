#include "lists.h"
/**
  * list_len - return the number of elements in a linked list
  * @h: list coming
  * Return: the number of elements
**/
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);

}
