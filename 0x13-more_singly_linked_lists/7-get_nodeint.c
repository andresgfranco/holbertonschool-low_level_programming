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

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
