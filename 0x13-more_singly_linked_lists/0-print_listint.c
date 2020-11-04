#include "lists.h"
/**
  * print_listint - prints all the elements of a list
  * @h: list coming
  * Return: the number of nodes
**/
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		printf("\n");
	}
		return (i);
}
