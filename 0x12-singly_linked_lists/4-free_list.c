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
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
