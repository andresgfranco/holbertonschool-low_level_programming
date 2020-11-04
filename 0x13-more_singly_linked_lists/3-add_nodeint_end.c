#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: list coming
  * @n: variable to assing
  * Return: the address of the new element
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *aux;

	last_node = (listint_t *) malloc(sizeof(listint_t));
	
	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
		*head = last_node;
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = last_node;
	}
	return (*head);
}
