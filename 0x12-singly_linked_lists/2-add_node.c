#include "lists.h"
/**
  * add_node - adds a new node at the beginning of a list
  * @head: first element of list
  * @str: string to be duplicated
  * Return: the address of the new element
  * or NULL if it failed
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	char *str_duplicate = strdup(str);

	new_head = (list_t *) malloc(sizeof(list_t));

	if (new_head == NULL)
		return (0);

	new_head->str = str_duplicate;
	new_head->len = strlen(str_duplicate);
	new_head->next = (*head);
	(*head) = new_head;

	return (new_head);
}
