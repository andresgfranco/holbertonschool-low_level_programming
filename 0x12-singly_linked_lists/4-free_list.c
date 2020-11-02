#include "lists.h"
/**
  * free_list - frees a list
  * @head: list coming
  * Return: void
**/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
