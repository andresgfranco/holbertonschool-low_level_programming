#include "lists.h"
/**
  * print_list - prints all the elements of a list
  * @h: list coming
  * Return: the number of nodes
**/
size_t print_list(const list_t *h)
{
	size_t i;

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
