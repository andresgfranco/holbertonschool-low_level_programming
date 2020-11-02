#include "lists.h"
unsigned int _strlen(const char *s);
/**
  * add_node - adds a new node at the beginning of a list
  * @head: first element of list
  * @str: string to be duplicated
  * Return: the address of the new element
  * or NULL if it failed
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *last_node, *aux;

	last_node = (list_t *) malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	last_node->str = strdup(str);
	last_node->len = _strlen(str);
	last_node->next = NULL;
	if (*head == NULL)
		*head = last_node;
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = last_node;
	}
	return (*head);
}
/**
 * _strlen - returns the lenght of a string
 * @s: string coming
 * Return: lenght of a string
 **/
unsigned int _strlen(const char *s)
{
	unsigned int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	return (l);

}
