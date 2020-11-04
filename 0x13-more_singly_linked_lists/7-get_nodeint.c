#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a list
  * @head: list coming
  * @index: index
  * Return: nth node of a list
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
