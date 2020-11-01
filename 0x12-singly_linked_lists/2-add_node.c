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
	list_t *new_head;

	new_head = (list_t *) malloc(sizeof(list_t));

	if (new_head == NULL)
		return (0);

	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	new_head->next = (*head);
	(*head) = new_head;

	return (new_head);
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
