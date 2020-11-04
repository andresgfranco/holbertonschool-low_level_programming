#include "lists.h"
/**
  * free_listint - frees a list
  * @head: list to be freed
  * Return: void
**/
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
