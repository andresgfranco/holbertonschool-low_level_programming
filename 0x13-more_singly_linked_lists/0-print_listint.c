#include "lists.h"
/**
  * print_listint - prints all the elements of a list
  * @h: list coming
  * Return: the number of nodes
**/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (i);
}
