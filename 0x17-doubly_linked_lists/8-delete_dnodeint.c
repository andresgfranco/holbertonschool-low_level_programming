#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes the node at index of a list
  * @head: list coming
  * @index: is the index of the node that should be deleted
  * Return: 1 if success, -1 if it failed
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *actual = *head;
	dlistint_t *node, *node2;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	while (actual)
	{
		if (i  == index - 1)
		{
			node = actual->next;
			actual->next = node->next;
			node2 = node->next;
			node2->prev = actual;
			free(node);
			return (1);
		}
		actual = actual->next;
		i++;
	}
	return (-1);
}
